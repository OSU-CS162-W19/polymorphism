#ifndef __UNIVERSITYPERSON_HPP
#define __UNIVERSITYPERSON_HPP

class UniversityPerson {
private:
  std::string name;
  int id;
public:
  UniversityPerson();
  UniversityPerson(std::string name, int id);
  virtual ~UniversityPerson();
  std::string get_name();
  int get_id();
  virtual void print();
};


#endif
