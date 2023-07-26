#include <iostream>

extern double sum_even(double array[], int n);

int main() {
    double ran_num[] = {1.3, 0, -1, 4};
    int len = 4;

    std::cout << sum_even(ran_num, len) << '\n';

    return 0; 
}