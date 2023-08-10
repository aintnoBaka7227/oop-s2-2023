#include <iostream>
#include "Person.h"


PersonList shallowCopyPersonList(PersonList pl) {
    PersonList shallow_list = pl;
    return shallow_list;
}