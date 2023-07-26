#include <iostream>

extern int min_element(int array[], int n);
int main() {
    // initialize array
    int ran_num[] = {6, 13, -100, 0, 23, 4};
    int count = 6;

    // print out the smallest value 
    std::cout << "The smallest element in the array is ";
    std::cout << min_element(ran_num, count) << '\n';
    return 0;
}