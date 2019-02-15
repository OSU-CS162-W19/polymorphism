#include <iostream>
#include "universityperson.hpp"

UniversityPerson::UniversityPerson() : name("unnamed"), id(-1) {}

UniversityPerson::UniversityPerson(std::string name, int id)
  : name(name), id(id) {}

UniversityPerson::~UniversityPerson() {
  std::cout << "== Calling UniversityPerson destructor on: " << this->id << std::endl;
}

std::string UniversityPerson::get_name() {
  return this->name;
}

int UniversityPerson::get_id() {
  return this->id;
}

void UniversityPerson::print() {
  std::cout << this->get_name() << "\t | " << this->get_id() << std::endl;
}
