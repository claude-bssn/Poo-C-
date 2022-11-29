#include <iostream>
#include <string>

using namespace std;

class Species
{
private:
  string m_species;
  int m_lifeExpectancy;
  int m_gestationTime;
  string m_race;

public:
  Species(/* args */);
  ~Species();
  void setSpecies(string p_species);
  string getSpecies();
  void setLifeExpectancy(int p_lifeExpectancy);
  int getLifeExpectancy();
  void setGestationTime(int p_gestationTime);
  int getGestationTime();
  void setRace(string p_race);
  string getRace();

};


