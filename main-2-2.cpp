#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary_array[] = {1, 1, 0, 0, 1};
    int count = 5;

    std::cout << binary_to_int(binary_array, count) << std::endl;

    return 0;

}