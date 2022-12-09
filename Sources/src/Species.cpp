#ifndef SPECIES_H
#define SPECIES_H
#include <iostream> 
#include "../../Header/Species.h"
#include <string>

using namespace std;

  /// @brief default Constructor
  Species::Species(/* args */)
  {
  }

  // Species destructor
  Species::~Species()
  {
  }

  /// @brief species member of Species
  /// @param p_species has to be a string
  void Species::setSpecies(string p_species){
    this->m_species = p_species;
  };

  /// @brief 
  /// @return string species member of Species
  string Species::getSpecies(){
    return this->m_species;
  }

    
  /// @brief set gestationTime member of Species
  /// @param p_gestationTime has to be an int, value in month
  void Species::setGestationTime(int p_gestationTime) {
    this->m_gestationTime = p_gestationTime;
  };

  /// @brief 
  /// @return int gestationTime member of Species in mount
  int Species::getGestationTime() {
    return this->m_gestationTime;
  }

  /// @brief set lifeExpectancy member of Species
  /// @param p_lifeExpectancy has to be an int, value in years
  void Species::setLifeExpectancy(int p_lifeExpectancy) {
    this->m_lifeExpectancy = p_lifeExpectancy;
  };

  /// @brief 
  /// @return int lifeExpectancy member of Species in years
  int Species::getLifeExpectancy() {
    return this->m_lifeExpectancy;
  }

  /// @brief set race member of Species
  /// @param p_race has to be a string
  void Species::setRace(string p_race) {
    this->m_race = p_race;
  } 

  /// @brief 
  /// @return string race membre of Species
  string Species::getRace() {
    return this->m_race;
  }

#endif