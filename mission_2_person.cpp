#include <iostream>
#include "person.h"


Person::Person(std::string bFirstName, std::string bLastName, unsigned int bYear):
   birthFirstName(bFirstName), birthLastName(bLastName), birthYear(bYear)
{
    struct lifeYear lifeYear;

    lifeYear.year = bYear;
    lifeYear.firstName = bFirstName;
    lifeYear.lastName = bLastName;

    // добавление исходных данных об имени и фамилии
    life.push_back(lifeYear);
}

void Person::changeFirstName(unsigned int year, const std::string fName)
{
    // если указанный год меньше года рождения, запрос игнорируется
    if(year < birthYear) {
        return;
    }

    // при наличии записи с указанным годом происходит
    // запись/перезапись поля имени
    for(auto i: life) {
        if(i.year == year) {
            i.firstName = fName;
            return;
        }
    }

    // добавление новых данных об имени
    struct lifeYear lifeYear;

    lifeYear.year = year;
    lifeYear.firstName = fName;
    lifeYear.lastName = "";

    life.push_back(lifeYear);
}


void Person::changeLastName(unsigned int year, const std::string lName)
{
    // если указанный год меньше года рождения, запрос игнорируется
    if(year < birthYear) {
        return;
    }

    // при наличии записи с указанным годом происходит
    // запись/перезапись поля фамилии
    for(auto i: life) {
        if(i.year == year) {
            i.lastName = lName;
            return;
        }
    }

    // добавление новых данных о фамилии
    struct lifeYear lifeYear;

    lifeYear.year = year;
    lifeYear.firstName = "";
    lifeYear.lastName = lName;

    life.push_back(lifeYear);
}

std::string Person::getFullName(unsigned int year)
{
    std::string fName = "";
    std::string lName = "";
    bool emptyfNameFlag = true;
    bool emptylNameFlag = true;

    // если указанный год меньше года рождения, выводится предупреждающее сообщение
    if(year < birthYear) {
        return "No person";
    }

    // проверка на наличие указанного ранее имени
    for(auto i: life) {
        if(!(i.firstName.empty()) && (i.year <= year)) {
            emptyfNameFlag = false;
        }
    }

    // проверка на наличие указанной ранее фамилии
    for(auto i: life) {
        if(!(i.lastName.empty()) && (i.year <= year)) {
            emptylNameFlag = false;
        }
    }

    // если к указанному годе не случилось ни одного изменения имени и фамилии выводится сообщение об этом
    if(emptyfNameFlag && emptylNameFlag) {
        return "Incognito";
    }

    // поиск имени актуального на указанный год
    // при условии, что изменения в имени были.
    // проводится перебор всех лет от указанного года до года рождения
    // тем самым определяя актуальное на указанный год имя
    if(!emptyfNameFlag) {
        for(unsigned int i = year; i >= birthYear; i--) {
            for(auto j: life) {
                if(j.year == i) {
                    fName = j.firstName;
                    break;
                }
            }
            if(!(fName.empty())) {
                break;
            }
        }
    }

    // поиск фамилии актуальной на указанный год
    // при условии, что изменения в фамилии были.
    // проводится перебор всех лет от указанного года до года рождения
    // тем самым определяя актуальную на указанный год фамилию
    if(!emptylNameFlag) {
        for(unsigned int i = year; i >= birthYear; i--) {
            for(auto j: life) {
                if(j.year == i) {
                    lName = j.lastName;
                    break;
                }
            }
            if(!(lName.empty())) {
                break;
            }
        }
    }

    // формирования выходной строки
    if(emptyfNameFlag) {
        return lName + " with unknown first name";
    }
    else if(emptylNameFlag) {
        return fName + " with unknown last name";
    }
    else {
        return fName + " " + lName;
    }
}

std::string Person::getFullNameWithHistory(unsigned int year)
{
    std::string fName = "";
    std::string lName = "";
    std::string previousfName = "";
    std::string previouslName = "";
    unsigned int activefNameYear = birthYear;
    unsigned int activelNameYear = birthYear;
    bool emptyfNameFlag = true;
    bool emptylNameFlag = true;

    // если указанный год меньше года рождения, выводится предупреждающее сообщение
    if(year < birthYear) {
        return "No person";
    }

    // проверка на наличие указанного ранее имени
    for(auto i: life) {
        if(!(i.firstName.empty()) && (i.year <= year)) {
            emptyfNameFlag = false;
        }
    }

    // проверка на наличие указанной ранее фамилии
    for(auto i: life) {
        if(!(i.lastName.empty()) && (i.year <= year)) {
            emptylNameFlag = false;
        }
    }

    // если к указанному годе не случилось ни одного изменения имени и фамилии выводится сообщение об этом
    if(emptyfNameFlag && emptylNameFlag) {
        return "Incognito";
    }

    // поиск имени актуального на указанный год
    // при условии, что изменения в имени были.
    // проводится перебор всех лет от указанного года до года рождения
    // тем самым определяя актуальное на указанный год имя
    if(!emptyfNameFlag) {
        for(unsigned int i = year; i >= birthYear; i--) {
            for(auto j: life) {
                if(j.year == i) {
                    fName = j.firstName;
                    activefNameYear = j.year;
                    break;
                }
            }
            if(!(fName.empty())) {
                break;
            }
        }

        // поиск предыдущего имени
        for(unsigned int i = (activefNameYear); i >= birthYear; i--) {
            for(auto j: life) {
                if((j.year == i) && (j.firstName != fName)) {
                    previousfName = j.firstName;
                    break;
                }
            }
            if(!(previousfName.empty())) {
                break;
            }
        }
    }

    // поиск фамилии актуальной на указанный год
    // при условии, что изменения в фамилии были.
    // проводится перебор всех лет от указанного года до года рождения
    // тем самым определяя актуальную на указанный год фамилию
    if(!emptylNameFlag) {
        for(unsigned int i = year; i >= birthYear; i--) {
            for(auto j: life) {
                if(j.year == i) {
                    lName = j.lastName;
                    activelNameYear = j.year;
                    break;
                }
            }
            if(!(lName.empty())) {
                break;
            }
        }

        // поиск предыдущей фамилии
        for(unsigned int i = (activelNameYear); i >= birthYear; i--) {
            for(auto j: life) {
                if((j.year == i) && (j.lastName != lName)) {
                    previouslName = j.lastName;
                    break;
                }
            }
            if(!(previouslName.empty())) {
                break;
            }
        }
    }

    // формирование выходной строки
    // если отсутствуют изменения имени
    if(emptyfNameFlag) {
        if(!(previouslName.empty())) {
            return lName + " (" + previouslName + ") " + "with unknown first name";
        }
        else {
            return lName + " with unknown first name";
        }
    }
    // если отсутствуют изменения фамилии
    else if(emptylNameFlag) {
        if(!(previousfName.empty())) {
            return fName + " (" + previousfName + ") " + "with unknown last name";
        }
        else {
            return fName + " with unknown last name";
        }
    }
    // если присутствуют изменения имени и фамилии
    else {
        if((!(previousfName.empty())) && (!(previouslName.empty()))) {
            return fName + " (" + previousfName + ") " + lName + " (" + previouslName + ")";
        }
        else if(!(previousfName.empty())) {
            return fName + " (" + previousfName + ") " + lName;
        }
        else if(!(previouslName.empty())) {
            return fName + " " + lName + " (" + previouslName + ")";
        }
        else {
            return fName + " " + lName;
        }
    }
}

