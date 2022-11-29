#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream> 
#include <string>
#include "../Sources/src/Diet.cpp"
#include "../Sources/src/Species.cpp"

using namespace std;

class Animal : public Species {
  private:
    int m_limbs;
    Diet diet;
    string m_name;

  public:
    Animal();
    Animal(Diet p_diet);
    Animal(string p_diet);
    void setLimbs(int p_limbs);
    int getLimbs();
    void setName(string p_name);
    string getName();
    void setDiet(string p_diet);
    string getDiet();


};
#endif