#include <iostream>
#include "instructor.hpp"

Instructor::Instructor(std::string name, int id, std::string title, float salary,
  int appt_length) : Employee(name, id, title, salary), appt_length(appt_length) {}

Instructor::~Instructor() {
  std::cout << "== Calling Instructor destructor on: " << this->get_id() << std::endl;
}

float Instructor::get_monthly_pay(float hours_worked) {
  return this->get_pay_rate() / this->appt_length;
}

float Instructor::get_monthly_pay() {
  return this->get_pay_rate() / this->appt_length;
}

std::string Instructor::get_title() {
  return Employee::get_title() + "*";
}

int Instructor::get_appt_length() {
  return this->appt_length;
}

void Instructor::print() {
  std::cout << this->get_name() << "\t | " << this->get_id() << "\t | "
    << this->get_title() << "\t | $" << this->get_pay_rate() << "\t | "
    << this->get_appt_length() << " months" << std::endl;
}
