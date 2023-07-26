#include <iostream>

double array_mean(int array[], int n) {
    // check array size 
    if (n < 1) {
        return 0.0;
    }
    // calculate mean
    else {
        double mean;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + array[i];
        }
        mean = (double)sum / n;
       return mean;
    }
}
