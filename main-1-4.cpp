#include <iostream>

extern int sum_two_arrays(int array[], int secondary[], int n);

int main() {
    // initialize arrays
    int first_array[] = {8, 3, -3, 2, -10};
    int second_array[] = {13, -56, 29, -18, 7};
    int size = 5;

    // call fuction for sum of two arrays
    // print out total sum

    std::cout << "the total sum of two arrays is " << sum_two_arrays(first_array, second_array, size) << '\n';

    return 0;
}