#include <iostream>

extern double weighted_average(int array[], int n);

int main() {
    int ran_num[] = {1,2,1,9,1,3};
    int len = 6;

    std::cout << weighted_average(ran_num, len) << std::endl;
}