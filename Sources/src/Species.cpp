#ifndef SPECIES_H
#define SPECIES_H
#include <iostream> 
#include "../../Header/Species.h"
#include <string>

using namespace std;
// Species constructor
  Species::Species(/* args */)
  {
  }
// Species destructor
  Species::~Species()
  {
  }

// LifeExpectancy setter & getter 
  void Species::setSpecies(string p_species){
    this->m_species = p_species;
  };

  string Species::getSpecies(){
    return this->m_species;
  }

    
// GestationTime setter & getter
  void Species::setGestationTime(int p_gestationTime) {
    this->m_gestationTime = p_gestationTime;
  };

  int Species::getGestationTime() {
    return this->m_gestationTime;
  }

// LifeExpectancy setter & getter
  void Species::setLifeExpectancy(int p_lifeExpectancy) {
    this->m_lifeExpectancy = p_lifeExpectancy;
  };

  int Species::getLifeExpectancy() {
    return this->m_lifeExpectancy;
  }

// race setter & getter
  void Species::setRace(string p_race) {
    this->m_race = p_race;
  } 
  string Species::getRace() {
    return this->m_race;
  }

#endif