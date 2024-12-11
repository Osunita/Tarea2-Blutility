// Fill out your copyright notice in the Description page of Project Settings.

#include "AssetDependencyUtils.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Framework/Application/SlateApplication.h"
#include "Misc/DateTime.h"

void UAssetDependencyUtils::GenerateAndSaveDependencyReport()
{
    FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

    TArray<FAssetData> AllAssets;
    AssetRegistry.GetAllAssets(AllAssets);

    TMap<FName, TSet<FName>> AssetDependencies;
    TSet<FName> AssetRoots;
    //uso TSet porque un mismo asset podría estar referenciado varias veces y se duplicaría en el documento

    for (const FAssetData& Asset : AllAssets)
    {
        TArray<FName> Dependencies;
        AssetRegistry.GetDependencies(Asset.PackageName, Dependencies);

        if (Dependencies.Num() > 0)
        {
            AssetDependencies.FindOrAdd(Asset.PackageName).Append(Dependencies);
        }
        else
        {
            TArray<FName> Referencers;
            AssetRegistry.GetReferencers(Asset.PackageName, Referencers);

            if (Referencers.Num() == 0)
            {
                AssetRoots.Add(Asset.PackageName);
            }
        }
    }

    FString Report;
    for (const FName& Root : AssetRoots)
    {
        Report += FString::Printf(TEXT("%s\n"), *Root.ToString());
        const TSet<FName>* Dependencies = AssetDependencies.Find(Root);
        if (Dependencies)
        {
            for (const FName& Dependency : *Dependencies)
            {
                Report += FString::Printf(TEXT("|- %s\n"), *Dependency.ToString());
            }
        }
    }
    
    EAppReturnType::Type UserResponse = FMessageDialog::Open(EAppMsgType::YesNo,
        FText::FromString(TEXT("Quieres generar el docuemnto con la lista de los Assets con dependencias?"))
    );
    
    if (UserResponse == EAppReturnType::Yes)
    {
        // nombre del archivo y generarlo
        FString CurrentDate = FDateTime::Now().ToString();
        FString FileName = FString::Printf(TEXT("RefLogOutput_%s.log"), *CurrentDate);
        
        FString FilePath = FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Logs"), FileName);
        
        if (FFileHelper::SaveStringToFile(Report, *FilePath))
        {
            FMessageDialog::Open(
                EAppMsgType::Ok,
                FText::FromString(FString::Printf(TEXT("Documento Generado"), *FilePath))
            );
        }
        else
        {
            FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(TEXT("No ha sido posible generar el documento")));
        }
    }
}
