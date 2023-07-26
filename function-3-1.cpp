#include <iostream>
#include <cmath>

bool is_fanarray(int array[], int n) {
    if (n < 1){
        return false;
    }
    else if (n == 1) {
        return true;
    }
    else {
        // check palindrome array
        for (int i = 0; i < ceil(n / 2); i++) {
            if (array[i] != array[n - i - 1]) {
                return false;
            }
        }
        // check ascending order 
        for (int i = ceil(n/2); i > 0; i--) {
            if (array[i] < array[i-1]) {
                return false;
            }
        return true;
        }
    }
}
