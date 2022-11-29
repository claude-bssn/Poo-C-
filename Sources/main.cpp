#include <iostream>
#include "./src/Animal.cpp"
#include "./src/Diet.cpp"
#include <string>

using namespace std;
int main() {
  // object initialisation 
  Animal *cat = new Animal();

  Diet *newDiet = new Diet();
  Animal *cow = new Animal(*newDiet);

  Animal *bird = new Animal("insectivore");

  cat->setSpecies("dog");
  cat->setDiet("herbivore");
  cat->setRace("chihuahua");
  cat->setName("Titan");
  cat->setLimbs(4);
  cat->setGestationTime(2);
  cat->setLifeExpectancy(18);

  cout << "Espèce " << cat->getSpecies() << endl;
  cout << "Race " << cat->getRace() << endl;
  cout << "Nom " << cat->getName() << endl;
  cout << "régime alimentaire " << cat->getDiet() << endl;
  cout << "Nombre de pattes " << cat->getLimbs() << endl;
  cout << "Temps de gestation (mois) " << cat->getGestationTime() << endl;
  cout << "Espérance de vie (années) " << cat->getLifeExpectancy() << endl;
  cout << "=========================" << endl;
  cout << "régime alimentaire " << cow->getDiet() << endl;
  cout << "=========================" << endl;
  cout << "régime alimentaire " << bird->getDiet() << endl;
  cout << "=========================" << endl;

  return 0;
}