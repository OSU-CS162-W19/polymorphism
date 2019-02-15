#ifndef _EMPLOYEE_HPP
#define _EMPLOYEE_HPP

#include "universityperson.hpp"

class Employee : public UniversityPerson {
private:
  std::string title;
  float pay_rate;
public:
  Employee(std::string name, int id, std::string title, float pay_rate);
  virtual ~Employee();
  std::string get_title();
  float get_pay_rate();
  virtual float get_monthly_pay(float hours_worked);
  virtual void print();

  friend void give_raise(Employee& employee, float percent_raise);
};

void give_raise(Employee& employee, float percent_raise);

#endif
