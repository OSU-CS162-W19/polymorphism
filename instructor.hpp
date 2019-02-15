#ifndef __INSTRUCTOR_HPP
#define __INSTRUCTOR_HPP

#include "employee.hpp"

class Instructor : public Employee {
private:
  int appt_length;
public:
  Instructor(std::string name, int id, std::string title, float salary, int appt_length);
  ~Instructor();
  float get_monthly_pay(float hours_worked);
  float get_monthly_pay();
  std::string get_title();
  int get_appt_length();
  void print();
};

#endif
