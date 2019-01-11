#include <iostream>
#include "employee.h"

Employee::Employee(std::string fName, std::string lName, Gender gen, unsigned int a, unsigned int cat):
    firstName(fName), lastName(lName), gender(gen), age(a), category(cat)
{
}

void Employee::promote()
{
    category++;
}

void Employee::demote()
{
    category--;
}

void Employee::printInfo()
{
    // вывод имени
    std::cout << std::endl << "First name: " << firstName;

    // вывод фамилии
    std::cout << std::endl << "Last name: " << lastName;

    // вывод пола
    if(gender == Gender::MALE) {
        std::cout << std::endl << "Gender: Male";
    }
    else {
        std::cout << std::endl << "Gender: Female";
    }

    // вывод возраста
    std::cout << std::endl << "Age: " << age;

    // вывод категории
    std::cout << std::endl << "Category: " << category << std::endl;
}
