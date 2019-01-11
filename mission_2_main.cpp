#include <iostream>
#include "person.h"

using namespace std;

int main()
{
    Person person("Polina", "Sergeeva", 1960);

    for(int year: {1959, 1960}) {
        cout << person.getFullNameWithHistory(static_cast<unsigned int>(year)) << endl;
    }

    person.changeFirstName(1965, "Appolinaria");
    person.changeLastName(1967, "Ivanova");
    for (int year : {1965, 1967}) {
        cout << person.getFullNameWithHistory(static_cast<unsigned int>(year)) << endl;
    }

    return 0;
}
