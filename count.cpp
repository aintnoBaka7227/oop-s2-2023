#include <iostream>

int count(int array[], int n) {
    int num_of_even = 0;
    // check the number of even elements
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            num_of_even+=1;            
        }
    }
    return num_of_even;
}
