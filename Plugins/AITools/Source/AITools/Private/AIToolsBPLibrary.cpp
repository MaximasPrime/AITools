// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AIToolsBPLibrary.h"
#include "AITools.h"
#include "Perception/AISense_Sight.h"
#include "Perception/AISense_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"


UAIToolsBPLibrary::UAIToolsBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


void UAIToolsBPLibrary::SetVisionAndHearing(UAIPerceptionComponent* Perception, bool ChangeVision, float SightRadius, float LossSightRadius, float HalfAngle, bool ChangeHearing, float HearingRange, bool& Success)
{
    Success = false;

    if (ChangeVision)
    {
        FAISenseID SightId = UAISense::GetSenseID(UAISense_Sight::StaticClass());
        if (!SightId.IsValid())
        {
            UE_LOG(LogTemp, Error, TEXT("Make Sure Sight is Enabled"));
            return;
        }
        auto Config1 = Perception->GetSenseConfig(SightId);
        auto ConfigSight = Cast<UAISenseConfig_Sight>(Config1);

        ConfigSight->SightRadius = SightRadius;
        ConfigSight->LoseSightRadius = LossSightRadius;
        ConfigSight->PeripheralVisionAngleDegrees = HalfAngle;

    }

    if (ChangeHearing)
    {
        FAISenseID HearingID = UAISense::GetSenseID(UAISense_Hearing::StaticClass());
        if (!HearingID.IsValid())
        {
            UE_LOG(LogTemp, Error, TEXT("Make Sure Hearing is Enabled"));
            return;
        }
        auto Config2 = Perception->GetSenseConfig(HearingID);
        auto ConfigHearing = Cast<UAISenseConfig_Hearing>(Config2);

        ConfigHearing->HearingRange = HearingRange;
    }

    Perception->RequestStimuliListenerUpdate();
    Success = true;
}

