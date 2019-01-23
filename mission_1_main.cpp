#include <iostream>
#include <vector>
#include "employee.h"

using namespace std;

int main()
{
    vector<Employee> umichWorks;

    // создание экземляров класса Employee
    Employee per1("Vincent", "Vega", Gender::MALE, 40, 3);
    Employee per2("Jules", "Winnfield", Gender::MALE, 46, 3);
    Employee per3("Mia", "Wallace", Gender::FEMALE, 24, 3);

    // добавление экземпляров в вектор
    umichWorks.push_back(per1);
    umichWorks.push_back(per2);
    umichWorks.push_back(per3);

    cout << endl << "Welcome to umichWorks! Here are our loyal employees: " << endl;
    for(auto employee:  umichWorks)
    {
        employee.printInfo();
    }

    // повышение категории одному из работников
    umichWorks[2].promote();

    // понижение категории остальным работникам
    umichWorks[0].demote();
    umichWorks[1].demote();

    cout << endl << "Here is the new info for the employees of umichWorks: " << endl;
    for( auto employee:  umichWorks)
    {
        employee.printInfo();
    }

    return 0;
}
