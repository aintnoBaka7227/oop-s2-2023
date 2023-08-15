#include <iostream>

extern int *readNumber();
extern int secondSmallestSum(int *numbers, int length);


int main() {
    
    int *ran_ray = new int [10];
    ran_ray = readNumber();
    std::cout << secondSmallestSum(ran_ray, 10) << std::endl;
    delete []ran_ray;
    return 0;
}