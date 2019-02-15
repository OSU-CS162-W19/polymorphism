#include <iostream>

#include "employee.hpp"

void give_raise(Employee& employee, float percent_raise) {
  employee.pay_rate *= (1.0 + percent_raise);
}

Employee::Employee(std::string name, int id, std::string title, float pay_rate) :
    UniversityPerson(name, id), title(title), pay_rate(pay_rate) {}

Employee::~Employee() {
  std::cout << "== Calling Employee destructor on: " << this->get_id() << std::endl;
}

std::string Employee::get_title(){
  return this->title;
}

float Employee::get_pay_rate(){
  return this->pay_rate;
}

float Employee::get_monthly_pay(float hours_worked){
  return hours_worked * this->pay_rate;
}

void Employee::print() {
  std::cout << this->get_name() << "\t | " << this->get_id() << "\t | "
    << this->get_title() << "\t | $" << this->get_pay_rate() << std::endl;
}
