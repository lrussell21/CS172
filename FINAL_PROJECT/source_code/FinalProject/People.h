#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>

using namespace std;
class People {
private:
  string firstName;
  string lastName;
public:
  People(string, string);
  string get_firstName();
  string get_lastName();
  void set_name(string, string);
};

#endif // !PEOPLE_H
#pragma once
