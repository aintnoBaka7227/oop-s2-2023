#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main () {
    int ran;
    std::cout << "Enter a number: ";
    std::cin >> ran;

    Person *ran_Person;
    ran_Person = createPersonArray(ran);

    for (int i = 0; i < ran; i++) {

        std::cout << ran_Person[i].name << std::endl;
        std::cout << ran_Person[i].age << std::endl;
    }

    delete[] ran_Person;

    return 0;
}