#include <iostream>
#include "Person.h"

extern PersonList createPersonList(int n);

int main () {

    PersonList ran_list;
    int count;
    std::cout << "Enter number of people: ";
    std::cin >> count;

    ran_list = createPersonList(count);

    for (int i = 0; i < count; i++) {
        std::cout << ran_list.people[i].name << std::endl;
        std::cout << ran_list.people[i].age << std::endl;
    }
    return 0;
}