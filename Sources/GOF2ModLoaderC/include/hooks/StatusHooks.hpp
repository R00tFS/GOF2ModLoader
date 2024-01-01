//
//  StatusHooks.hpp
//  
//
//  Created by bibi_fire on 31/12/2023.
//

#include <stdio.h>
#include <substrate.h>
#include "Header.h"

class Status {
    Status();
public:
    // Getters
    
    void *(*getStation) = findSymbol("__ZN6Status10getStationEv");
    void *(*getShip) = findSymbol("__ZN6Status7getShipEv");
    void *(*getCurrentCampainMission) = findSymbol("__ZN6Status25getCurrentCampaignMissionEv");
    void *(*getCampainMission) = findSymbol("__ZN6Status18getCampaignMissionEv");
    void *(*getMission) = findSymbol("__ZN6Status10getMissionEv");
    void *(*getFreelanceMission) = findSymbol("__ZN6Status19getFreelanceMissionEv");
    void *(*getStationVisited) = findSymbol("__ZN6Status18getStationsVisitedEv");
    void *(*getSystem) = findSymbol("__ZN6Status9getSystemEv");
    void *(*getWantedInCurrentOrbit) = findSymbol("__ZN6Status23getWantedInCurrentOrbitEv");
    void *(*getJumpgateUsed) = findSymbol("__ZN6Status15getJumpgateUsedEv");
    void *(*getCapturedCrates) = findSymbol("__ZN6Status17getCapturedCratesEv");
    void *(*getBoughtEquipments) = findSymbol("__ZN6Status18getBoughtEquipmentEv");
    void *(*getPlanetNames) = findSymbol("__ZN6Status14getPlanetNamesEv");
    void *(*getCredits) = findSymbol("__ZN6Status10getCreditsEv");
    void *(*getGoodsProduced) = findSymbol("__ZN6Status16getGoodsProducedEv");
    void *(*getRating) = findSymbol("__ZN6Status9getRatingEv");
    void *(*getLastXP) = findSymbol("__ZN6Status9getLastXPEv");
    void *(*getKills)() = findSymbol("__ZN6Status8getKillsEv");
    void *(*getPirateKills)() = findSymbol("__ZN6Status14getPirateKillsEv");
    void *(*getMissionCount)() = findSymbol("__ZN6Status15getMissionCountEv");
    void *(*getLevel)() = findSymbol("__ZN6Status8getLevelEv");
    void *(*getStanding)() = findSymbol("__ZN6Status11getStandingEv");
    void *(*getBluePrints)() = findSymbol("__ZN6Status13getBluePrintsEv");
    void *(*getAgents)() = findSymbol("__ZN6Status9getAgentsEv");
    void *(*getWingman)() = findSymbol("__ZN6Status10getWingmenEv");
    void *(*getCollectedBounties)() = findSymbol("__ZN6Status20getCollectedBountiesEi");
    void *(*getFreighterMissionStation)() = findSymbol("__ZN6Status29getFreighterMissionStationBitEi");
    void *(*getGammaRayDamagePerSecond)() = findSymbol("__ZN6Status26getGammaRayDamagePerSecondEii");
    void *(*getWanted)() = findSymbol("__ZN6Status9getWantedEv");
    
    // Setters be careful, some should not be used...

    void *(*setPassengers)() = findSymbol("__ZN6Status13setPassengersEi");
    void *(*setSystemVisibility)(int, bool) = findSymbol("__ZN6Status19setSystemVisibilityEib");
    void *(*setStationStack)(Array<Station*>*) = findSymbol("__ZN6Status15setStationStackEP5ArrayIP7StationE");
    void *(*setStation)(Station*) = findSymbol("__ZN6Status10setStationEP7Station");
    void *(*setMission)(Mission*) = findSymbol("__ZN6Status10setMissionEP7Mission");
    void *(*setPassengers)(int) = findSymbol("__ZN6Status13setPassengersEi");
    void *(*setFreelanceMission)(Mission*) = findSymbol("__ZN6Status19setFreelanceMissionEP7Mission");
    void *(*setCampaignMission)(Mission*) = findSymbol("__ZN6Status18setCampaignMissionEP7Mission");
    void *(*setCurrentCampaignMission)(Mission*) = findSymbol("__ZN6Status25setCurrentCampaignMissionEi");
    void *(*setShip)(Ship*) = findSymbol("__ZN6Status7setShipEP4Ship");
    void *(*setStationsVisited)(int) = findSymbol("__ZN6Status18setStationsVisitedEi");
    void *(*setJumpgatesUsed)(int) = findSymbol("__ZN6Status15setJumpgateUsedEi");
    void *(*setCapturedCrates)(int) = findSymbol("__ZN6Status17setCapturedCratesEi");
    void *(*setBoughtEquipment)() = findSymbol("__ZN6Status18setBoughtEquipmentEi");
    void *(*setRating)(int) = findSymbol("__ZN6Status9setRatingEi");
    void *(*setPlayingTime)(long long) = findSymbol("__ZN6Status14setPlayingTimeEx");
    void *(*setKills)(int) = findSymbol("__ZN6Status8setKillsEi");
    void *(*setMissionCount)(int) = findSymbol("__ZN6Status15setMissionCountEi");
    void *(*setLevel)(int) = findSymbol("__ZN6Status8setLevelEi");
    void *(*setLastXP)(int) = findSymbol("__ZN6Status9setLastXPEi");
    void *(*setGoodsProduced)(int) = findSymbol("__ZN6Status16setGoodsProducedEi");
    void *(*setCredits)(int) = findSymbol("__ZN6Status10setCreditsEi");
    void *(*setPirateKills)(int) = findSymbol("__ZN6Status14setPirateKillsEi");
    void *(*setWingmen)(Array<AbyssEngine::String*>*) = findSymbol("__ZN6Status10setWingmenEP5ArrayIPN11AbyssEngine6StringEE");

    
    // Others
    
    // Sure run it :D
    void *(*resetGame)() = findSymbol("__ZN6Status9resetGameEv");
    
    void *(*gameWon)() = findSymbol("__ZN6Status7gameWonEv");
    void *(*moveWanted)() = findSymbol("__ZN6Status10moveWantedEv");
    void *(*nextCampaignMission)(bool) = findSymbol("__ZN6Status19nextCampaignMissionEb");
    void *(*changeCredits)(int) = findSymbol("__ZN6Status13changeCreditsEi");
    void *(*inHardCoreMode)() = findSymbol("__ZN6Status12hardCoreModeEv");
    void *(*visitStation)() = findSymbol("__ZN6Status12visitStationEv");
    void *(*checkForLevelUp)() = findSymbol("__ZN6Status15checkForLevelUpEv");
    void *(*inDeepScienceOrbit)() = findSymbol("__ZN6Status18inDeepScienceOrbitEv");
    void *(*inBlackMarketSystem)() = findSymbol("__ZN6Status19inBlackMarketSystemEv");
    
    
    // incs (I think these are increment functions, can be useful for kill event maybe ?
    
    void *(*incKills)() = findSymbol("__ZN6Status8incKillsEv");
    void *(*incPirateKills)() = findSymbol("__ZN6Status14incPirateKillsEv");
    void *(*incMostWanted)() = findSymbol("__ZN6Status15incMissionCountEv");
    void *(*incCollectedBounties)(int) = findSymbol("__ZN6Status20incCollectedBountiesEi");
    void *(*incMissionCount)() = findSymbol("__ZN6Status15incMissionCountEv");
    void *(*incGoodsProduced)(int) = findSymbol("__ZN6Status16incGoodsProducedEi");
    
    //gametick event ong
    void *(*incPlayingTime)(long long) = findSymbol("__ZN6Status14incPlayingTimeEx");
    
};
