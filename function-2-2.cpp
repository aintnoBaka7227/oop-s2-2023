#include <iostream>

int max_element(int array[], int n) {
    // check array size
    if (n < 1) {
        return 0;
    }
    else {
        // assign the largest value as the first element
        int largest = array[0];
        // update largest value exists
        for (int i = 0; i < n; i++) {
            if (largest < array[i]) {
                largest = array[i];
            }
        }
        return largest;
    }
}