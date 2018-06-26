#include "Doctor.h"

using namespace std;

Doctor::Doctor(string docFirstName, string docLastName) : People(docFirstName, docLastName) {};

void Doctor::set_Profession(string ProfessionEnter) {
  type = ProfessionEnter;
}

string Doctor::get_Profession() { return type; }