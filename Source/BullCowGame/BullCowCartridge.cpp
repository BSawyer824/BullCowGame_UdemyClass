// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Howdy, Pardner!"));
    PrintLine(TEXT("Welcome to Bulls and Cows."));
    PrintLine(TEXT("Press enter to continue . . ."));


}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    
    ClearScreen();

    FString HiddenWord = TEXT("above");   //TEXT macro ensures that strings will work on all systems

}