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
  Instructor instructor("Leia Organa", 933222222, "Instructor", 1000000, 9);

  person.print();
  employee.print();
  instructor.print();

  return 0;
}
