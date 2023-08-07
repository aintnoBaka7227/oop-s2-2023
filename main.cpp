#include <iostream>
#include "workshop.h"

int main() {

    double *num_1 = NULL;
    double ran_num = 8;
    num_1 = &ran_num;

    std::cout << *num_1 << std::endl;

    changeValue(num_1);

    std::cout << ran_num << std::endl;

    double num[] = {8, 1, 2.1, 3.4};
    int len = 4;

    printArray(num, len);
    
    std::cout << arrayMax(num, len) << std::endl;

    double *newarray = NULL;

    int size = 5;
    double clone = 5.1;
    newarray = dynamicArray(size, clone);

    for (int i = 0; i < size; i++) {
        std::cout << newarray[i] << ' ';
    } 
    std::cout <<  std::endl;

    delete[] newarray;

     
    return 0;
}