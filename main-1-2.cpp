#include <iostream>

extern double array_mean(int array[], int n);

int main() {
    
    // initialize array
    int ran_num[] = {8, 6, 10, 0 , -2, -7};
    int count = 6;

    // call function
    // print out mean 
    std::cout << "The mean of the array is: " << array_mean(ran_num, count) << '\n';

    return 0;
}