#include <iostream>

extern void count_digits(int array[4][4]);

int main() {

    int ran[4][4] = {{0,1,2,3}, {4,5,6,7},{8,9,10,11}, {12,13,14,15}};

    count_digits(ran);

    return 0;
}