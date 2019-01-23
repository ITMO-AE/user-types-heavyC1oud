#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

struct lifeYear
{
    std::string firstName;
    std::string lastName;
    unsigned int year;
};


class Person
{
private:
    std::vector<struct lifeYear> life;
    std::string birthFirstName;
    std::string birthLastName;
    unsigned int birthYear;

public:
    Person(std::string bFirstName, std::string bLastName, unsigned int bYear);

    void changeFirstName(unsigned int year, const std::string fName);
    void changeLastName(unsigned int year, const std::string lName);
    std::string getFullName(unsigned int year);
    std::string getFullNameWithHistory(unsigned int year);

};

#endif // PERSON_H
