#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl) {
    PersonList list_deep;
    list_deep.numPeople = pl.numPeople;
    list_deep.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; i++) {
        list_deep.people[i].name = pl.people[i].name;
        list_deep.people[i].age = pl.people[i].age;
    }  
    return list_deep;
}