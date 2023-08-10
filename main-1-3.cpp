#include <iostream>
#include "Person.h"

extern PersonList deepCopyPersonList(PersonList pl);

int main() {
    
    PersonList former_list;
    int n;
    std::cout << "number of people: ";
    std::cin >> n;


    former_list.numPeople = n;
    former_list.people = new Person[n];
    for (int i = 0; i < n; i++) {
        former_list.people[i].name = "Paul Tran";
        former_list.people[i].age = 18;
    }
    
    PersonList new_list;
    new_list = deepCopyPersonList(former_list);

    for (int i = 0; i < n; i++) {
        std::cout << &new_list.people[i].name << std::endl;
        std::cout << &former_list.people[i].name << std::endl;
        std::cout << &new_list.people[i].age << std::endl;
        std::cout << &former_list.people[i].age << std::endl;
    }
    std::cout << &new_list.people << std::endl;
    std::cout << &former_list.people << std::endl;

    return 0;
}