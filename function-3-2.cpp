#include <iostream>
#include <cmath>

int median_array(int array[], int n) {
    if (n < 1) {
        return 0;
    }
    else if (n % 2 == 0) {
        return 0;
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if(array[i] > array[j]) {
                    int temp_num = array[j];
                    array[j] = array[i];
                    array[i] = temp_num;
                }
            } 
        }
        int middle = ceil(n/2);
        return array[middle];
    }
}
