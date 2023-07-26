#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    // initialize array
    int ran_num[] = {10,6,2,2};
    int len = 4;

    // print out result
    std::cout << is_descending(ran_num, len) << '\n';

    return 0;
}