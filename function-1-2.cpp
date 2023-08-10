#include <iostream>
#include "Person.h"


PersonList createPersonList (int n) {
    PersonList first_list;
    first_list.numPeople = n;
    first_list.people = new Person[n];
    for (int i = 0; i < n; i++) {
        first_list.people[i].name = "Jane Doe";
        first_list.people[i].age = 1;
    }
    return first_list;
}



