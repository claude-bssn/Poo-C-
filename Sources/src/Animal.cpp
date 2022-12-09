#include <iostream> 
#include "../../Header/Animal.h"
#include "../../Header/Diet.h"
#include "./Diet.cpp"
using namespace std;

  /// @brief Default constructor
  Animal::Animal() {
    Diet *myDiet = new Diet();
    this->diet = *myDiet;
  }

  /// @brief overload of Animal constructor
  /// @param p_diet has a Diet object
  Animal::Animal(Diet p_diet) {
    this->diet = p_diet;
  }

  /// @brief overload of Animal constructor initiate a Diet object
  /// @param p_diet has to be a string
  Animal::Animal(string p_diet) {
    Diet *myDiet = new Diet(p_diet);
    this->diet = *myDiet;
  }
  
  /// @brief set name member of Animal
  /// @param p_name has to be a string
  void Animal::setName(string p_name) {
    this->m_name = p_name;
  } 

  /// @brief  
  /// @return string name member of Animal
  string Animal::getName() {
    return this->m_name;
  }

  /// @brief set limb member of Animal
  /// @param p_limbs has to be an int
  void Animal::setLimbs(int p_limbs) {
    this->m_limbs = p_limbs;
  } 
  /// @brief 
  /// @return int limb member of Animal
  int Animal::getLimbs() {
    return this->m_limbs;
  }

  /// @brief 
  /// @return string diet member of Animal
  string Animal::getDiet() {
    return this->diet.getDiet();
  }

  /// @brief set diet member of Animal
  /// @param p_diet has to be  a string
  void Animal::setDiet(string p_diet) {
    this->diet.setDiet(p_diet);
  }
