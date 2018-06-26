#ifndef DOCTOR_H
#define DOCTOR_H
#include "People.h"
#include <string>

//#include 
using namespace std;

class Doctor : public People {
private:
  string type;
public:
  Doctor(string, string);
  void set_Profession(string);
  string get_Profession();
};

#endif
