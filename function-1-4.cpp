#include <iostream>

int sum_two_arrays(int array[], int secondary[], int n) {
    // check arrays length
    if (n < 1) {
        return 0;
    }
    // calculate the sum
    else {
        int total_sum = 0;
        int sum_first = 0;
        int sum_second = 0;

        for (int i = 0; i < n; i++) {
            sum_first = sum_first + array[i];
            sum_second = sum_second + secondary[i];
        }

        total_sum = sum_first + sum_second;
        return total_sum;
    }
}