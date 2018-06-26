#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <vector>
#include <string>
#include "Date.h"
#include "Patient.h"
#include "Doctor.h"
using namespace std;

class Appointment {
private:
  vector<Date> time;
  vector<Patient> peeps;
  vector<Doctor> docs;
  int amount = 0;
public:
  Appointment();
  void set_Appointment(Patient pat, Doctor doc, Date Setdate);
  void del_Appointment(string eraseFirstName, string eraseLastName);
  void get_Appointment(string firstNameInput, string lastNameInput);
  int get_amount();
  Date get_time(int index);
  Patient get_Patient(int index);
  Doctor get_Doctor(int index);
};
#endif
