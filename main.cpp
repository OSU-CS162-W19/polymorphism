#include <iostream>
#include <cstdlib>

#include "universityperson.hpp"
#include "employee.hpp"
#include "instructor.hpp"

Employee* get_employee(int n) {
  if (rand() % 2) {
    return new Employee("An Employee", 933000000 + n, "Employee", n * 10.0);
  } else {
    return new Instructor("An Instructor", 933000000 + n, "Instructor", 10000 * n, 9);
  }
}

int main(int argc, char const *argv[]) {
  UniversityPerson person("Rey", 933000000);
  Employee employee("Luke Skywalker", 933111111, "Employee", 50.00);
  Instructor instructor("Leia Organa", 933999999, "Instructor", 1000000, 9);

  person.print();
  employee.print();
  instructor.print();

  std::cout << std::endl;
  std::cout << "Monthly pay for " << employee.get_name() << ": "
    << employee.get_monthly_pay(160) << std::endl;
  std::cout << "Monthly pay for " << instructor.get_name() << ": "
    << instructor.get_monthly_pay(160) << std::endl;

  UniversityPerson person2;
  person2 = (UniversityPerson)employee;
  std::cout << std::endl;

  Employee employee2 = instructor;
  // Instructor instructor2 = employee;

  person2.print();
  employee2.print();
  // ((UniversityPerson)instructor).print();

  std::cout << std::endl;
  Employee* employee_ptr = new Instructor("Leia Organa", 933222222, "Instructor", 1000000, 9);
  employee_ptr->print();
  std::cout << "Monthly pay for " << employee_ptr->get_name() << ": "
    << employee_ptr->get_monthly_pay(160) << "\t" /*<< employee_ptr->get_appt_length()*/ <<  std::endl;
  delete employee_ptr;

  // std::cout << std::endl;
  // Employee** array = new Employee*[5];
  // for (int i = 0; i < 5; i++) {
  //   array[i] = get_employee(i);
  //   array[i]->print();
  // }

  std::cout << std::endl;
  return 0;
}
