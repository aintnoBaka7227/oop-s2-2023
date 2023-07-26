#include <iostream>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    else {
        double average = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if(array[i] == array[j]) {
                    count++;
                }
            }
            average = average + array[i] * 1.0 * count / n;
        }
        return average;
    }
}
