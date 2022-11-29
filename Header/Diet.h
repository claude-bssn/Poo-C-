#ifndef DIET_H
#define DIET_H

#include <string>
using namespace std;

class Diet {
  private:
    string m_diet;
  public:
    Diet();
    Diet(string p_diet);
    void setDiet(string p_diet);
    string getDiet();
};

#endif