#include "Grade.h"

Grade::Grade(std::string assignment, int value) {
    this->assignment = assignment;
    this->value = value;
}

Grade::Grade():Grade("math", 0) {

}

