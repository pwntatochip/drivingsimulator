// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "SaveFolderDialogThread.h"
#include "Containers/UnrealString.h"
#if WITH_EDITOR
#include "Editor/UnrealEd/Classes/Editor/EditorEngine.h"
#endif

#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayFunctionLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Public/Slate/SceneViewport.h"
#include "Runtime/Engine/Classes/Engine/GameEngine.h"

// Sets default values for this component's properties
//ULoggingComponent::ULoggingComponent()
//{
//}

void UMyBlueprintFunctionLibrary::ShowSaveDialog() {
    FSaveFolderDialogThread::startThread();
}

FString UMyBlueprintFunctionLibrary::GetCurrentSaveDirectory() {
    FString toReturn;

    //Guard against accessing the folder while the thread still runs. This is needed because the Blueprint UI may constantly call this when updating.
    if (!FSaveFolderDialogThread::isThreadFinished() || FSaveFolderDialogThread::getSelectedFolder().Equals(FString(""))) {
        toReturn = FString("Select a folder to write into");
    }
    else {
        toReturn = FSaveFolderDialogThread::getSelectedFolder();
    }

    return toReturn;
}

bool UMyBlueprintFunctionLibrary::SaveArrayText(FString SaveDirectory, FString FileName, TArray<FString> SaveText, bool AllowOverwriting = false)
{
    SaveDirectory += *FString("\\");
    SaveDirectory = SaveDirectory.Replace(*FString("\\"), *FString("/"));
    SaveDirectory += FileName;

    if (!AllowOverwriting)
    {
        if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*SaveDirectory))
        {
            return false;
        }
    }

    FString FinalString = "";
    for (FString& Each : SaveText)
    {
        FinalString += Each;
        FinalString += LINE_TERMINATOR;
    }

    return FFileHelper::SaveStringToFile(FinalString, *SaveDirectory);
}

const FVector2D UMyBlueprintFunctionLibrary::GetAbsoluteLocationForCursorWidgetFromMousePosition(APlayerController* PlayerController, const FVector2D WidgetSize)
{
    float mouse_x;
    float mouse_y;
    PlayerController->GetMousePosition(mouse_x, mouse_y);
    const FVector2D DisplaySize = GetSpectatorDisplayResolution();
    FVector2D MousePositionPercentage = FVector2D(mouse_x / DisplaySize.X, mouse_y / DisplaySize.Y);
    return MousePositionPercentage * WidgetSize;
}

const FVector2D UMyBlueprintFunctionLibrary::OffsetCursorWidgetFromMouseLocationForMiddlePivot(const FVector2D AbsoluteCursorLocation, const FVector2D TargetResolution)
{
    FVector2D Result = TargetResolution / 2.f - AbsoluteCursorLocation;
    return Result;
}

const FVector2D UMyBlueprintFunctionLibrary::GetSpectatorDisplayResolution()
{
    FSceneViewport* sceneViewport = nullptr;

    if (!GIsEditor)
    {
        UGameEngine* GameEngine = Cast<UGameEngine>(GEngine);
        sceneViewport = GameEngine->SceneViewport.Get();
    }
#if WITH_EDITOR
    else
    {
        UEditorEngine* EditorEngine = CastChecked<UEditorEngine>(GEngine);
        FSceneViewport* PIEViewport = (FSceneViewport*)EditorEngine->GetPIEViewport();
        if (PIEViewport != nullptr && PIEViewport->IsStereoRenderingAllowed())
        {
            sceneViewport = PIEViewport;
        }
        else
        {
            FSceneViewport* EditorViewport = (FSceneViewport*)EditorEngine->GetActiveViewport();
            if (EditorViewport != nullptr && EditorViewport->IsStereoRenderingAllowed())
            {
                sceneViewport = EditorViewport;
            }
        }
    }
#endif
    if (sceneViewport != nullptr)
    {
        return sceneViewport->FindWindow()->GetSizeInScreen();
    }

    return FVector2D();
}