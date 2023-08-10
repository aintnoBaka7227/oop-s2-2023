#include <iostream>
#include "Person.h"


Person* createPersonArray(int n) {
    Person* ptr_person_array = new Person[n];
    for (int i = 0; i < n; i++) {
        ptr_person_array[i].name = "John Doe";
        ptr_person_array[i].age = 0;
    }
    return ptr_person_array;
}


