#include <iostream>

extern int array_sum(int array[], int n);

int main() {

    // initialize the array
    int ran_array[7] = {3, 8, -1, 0, -9, 0, 6};
    int count = 7;

    // call function for sum
    // print out result 
    std::cout << "The sum of the array is " << array_sum(ran_array, count) << '\n';

    return 0;
}