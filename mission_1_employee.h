#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

enum class Gender {
    MALE,
    FEMALE,
};


class Employee
{
private:
     std::string firstName;
     std::string lastName;
     Gender gender;
     unsigned int age;
     unsigned int category;


public:
    Employee(std::string fName, std::string lName, Gender gen, unsigned int a, unsigned int cat);

    void promote();
    void demote();
    void printInfo();
};

#endif // EMPLOYEE_H
