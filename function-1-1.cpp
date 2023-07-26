#include <iostream>

int array_sum(int array[], int n) {
    // check array size
    if (n < 0) {
        return 0;
    }
    // calculate the sum
    else{
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + array[i];
        }
        return sum;
    }
}