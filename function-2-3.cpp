#include <iostream>
#include <cmath>

int palindrome_sum(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    for (int i = 0; i <= ceil(length / 2); i++) {
        if (integers[i] != integers[length -1 - i]) {
            return -2;
        }
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + integers[i];
    }
    return sum;
}
bool is_array_palindrome(int integers[], int length) {
    if (length <= 0) {
        return false;
    }
    else {
        for (int i = 0; i <= ceil(length / 2); i++) {
            if (integers[i] != integers[length -1 - i]) {
                return false;
            }
        }
        return true;
    }
}
int sum_integers(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    else {
        int sum = 0;
        for (int i = 0; i < length; i++) {
            sum = sum + integers[i];
        }
        return sum;
    }
}