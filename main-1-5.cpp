#include <iostream>

extern int count_evens(int number);

int main() { 
    // initialize variable
    int ran_num;

    // take input
    std::cout << "Enter an integer: ";
    std::cin >> ran_num;

    // print out the number of even
    std::cout << "The number of even numbers between 1 and " << ran_num << " is ";
    std::cout << count_evens(ran_num) << '\n';

    return 0;
}