#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
    // initialize array
    int ran_num[] = {1,1,1};
    int len = 3;

    // print out result
    std::cout << is_ascending(ran_num, len) << '\n';

    return 0;
}