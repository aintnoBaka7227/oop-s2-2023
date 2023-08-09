#include <iostream>
#include <cmath>

extern int bin_to_int (int binary_digits[], int number_of_digits);


int main() {

    int ran[4] = {0,1,1,0};
    int count = 4;
    std::cout << bin_to_int(ran, count);

    return 0;
}