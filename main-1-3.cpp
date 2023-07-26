#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {

    // initialize array
    int ran_num[] = {1, 8, 0, -6, 2, 0, 1};
    int len = 6;
    int special_num = 0;

    // call function to count number of same integer
    // print out number of same integer
    std::cout << " The number of same integer as " << special_num << " is ";
    std::cout << num_count(ran_num, len, special_num) << '\n';

    return 0;
}

