#include <iostream>

int count_evens(int number) {
    // if number is equal and less than 1 the return 0
    if(number <= 1) {
        return 0;
    }
    // check how many even nums 
    else {
        int count = 0;
        for (int i = 1; i <= number; i++) {
            if (i % 2 == 0) {
                count++;
            }
        }
        return count;
    }
}