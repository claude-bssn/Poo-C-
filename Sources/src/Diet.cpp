#ifndef DIET_CPP
#define DIET_CPP

#include <iostream> 
#include "../../Header/Diet.h"
using namespace std;

// default constructor
Diet::Diet(){
  this->m_diet = "carnivorous";
  
};

// Diet constructor
Diet::Diet(string p_diet) {
  this->m_diet = p_diet;
};

// Diet getter & setter 
void Diet::setDiet(string p_diet) {
  this->m_diet = p_diet;
}
string Diet::getDiet(){
  return this-> m_diet;
};

#endif