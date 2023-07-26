#include <iostream>

int num_count(int array[], int n, int number) {
    //check if the array is void
    if (n < 1) {
        return 0;
    }
    // count how many same number
    else {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (number == array[i]) {
                count++;
            }
        }
        return count;
    }
}