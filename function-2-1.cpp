#include <iostream> 

int min_element(int array[], int n) {
    // check array length 
    if (n < 1) {
        return 0;
    }
    else {
        // assign the smallest value as the first index
       int smallest = array[0];
       for (int i = 0; i < n; i++) {
        // update the smallest value
           if (smallest > array[i]) {
               smallest = array[i];
           }
       }
       return smallest;
    }
}