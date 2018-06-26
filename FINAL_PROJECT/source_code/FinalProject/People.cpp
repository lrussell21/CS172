#include "People.h"
using namespace std;

People::People(string firstNameSet, string lastNameSet) {
  firstName = firstNameSet;
  lastName = lastNameSet;
}

string People::get_firstName() {
  return firstName;
}

string People::get_lastName() {
  return lastName;
}

void People::set_name(string firstNameSet, string lastNameSet) {
  firstName = firstNameSet;
  lastName = lastNameSet;
}