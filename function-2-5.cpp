#include <iostream>

bool is_descending(int array[], int n) {
    // check array size
    if (n < 1) {
        return false;
    }
    else if (n == 1) {
        return true;
    }
    else {
        // stop when there is a break in the ascending trend
        // initialize variable for counting
        int count = 0;
        while (count < n-1) {
            if ( array[count] < array[count+1]) {
                return false;
            }
            count++;
        }
        return true;
    }
}