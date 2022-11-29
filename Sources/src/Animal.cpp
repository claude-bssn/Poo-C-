#include <iostream> 
#include "../../Header/Animal.h"
#include "../../Header/Diet.h"
#include "./Diet.cpp"
using namespace std;

// Animal constructor
  Animal::Animal() {
    Diet *myDiet = new Diet();
    this->diet = *myDiet;
  }

  Animal::Animal(Diet p_diet) {
    this->diet = p_diet;
  }

 Animal::Animal(string p_diet) {
    Diet *myDiet = new Diet(p_diet);
    this->diet = *myDiet;
  }
  
// name setter & getter
  void Animal::setName(string p_name) {
    this->m_name = p_name;
  } 
  string Animal::getName() {
    return this->m_name;
  }

// Limbs setter & getter
  void Animal::setLimbs(int p_limbs) {
    this->m_limbs = p_limbs;
  } 
  int Animal::getLimbs() {
    return this->m_limbs;
  }

// Diet getter summon through diet obj
  string Animal::getDiet() {
    return this->diet.getDiet();
  }
  void Animal::setDiet(string p_diet) {
    this->diet.setDiet(p_diet);
  }
