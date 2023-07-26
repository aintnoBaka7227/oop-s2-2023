#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
    // initialize array
    int ran_num[] = {8, 0, 2, 9, -4, -5, 5, 0};
    int count = 8;

    // print out result
    two_five_nine(ran_num, count);

    return 0;
}