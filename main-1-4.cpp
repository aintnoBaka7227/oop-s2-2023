#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

int main() {
    PersonList former_list;
    std::cout << "Enter number of people: ";
    std::cin >> former_list.numPeople;
    former_list.people = new Person[former_list.numPeople];

    for (int i = 0; i < former_list.numPeople; i++) {
        std::cout << "Enter person's name: ";
        std::cin >> former_list.people[i].name;
        std::cout << "Enter the person's age: ";
        std::cin >> former_list.people[i].age;
    }

    PersonList new_list = shallowCopyPersonList(former_list);
    std::cout << new_list.numPeople << std::endl;
    for (int i = 0; i < new_list.numPeople; i++) {
        std::cout << new_list.people[i].name << std::endl;
        std::cout << new_list.people[i].age << std::endl;
    }

    

    return 0;

}