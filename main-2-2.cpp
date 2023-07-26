#include <iostream>

extern int max_element(int array[], int n);

int main() {

    // initialize array
    int ran_num[] = {0, 1, 8, -100, 7, -5, 9};
    int len = 7;

    // print out the largest value
    std::cout << "The largest value of the array is ";
    std::cout << max_element(ran_num, len) << '\n';

    return 0;
}