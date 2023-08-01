#include <iostream>

int sum_min_max(int integers[], int length) {
    int sum;
    if (length <= 0) {
        return -1;
    }
    else {
        int min = integers[0];
        int max = integers[0];
        for (int i = 0; i < length; i++) {
            if (min > integers[i]) {
                min = integers[i];
            }
            if (max < integers[i]) {
                max = integers[i];
            }
        }
        sum = min + max;
        return sum;
    }

}

int array_min(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    else {
        int min = integers[0];
        for (int i = 0; i < length; i++) {
            if (min > integers[i]) {
                min = integers[i];
            }
        }
        return min;
    }
}

int array_max(int integers[], int length) {
    if (length <= 0) {
        return -1;
    }
    else {
        int max = integers[0];
        for (int i = 0; i < length; i++) {
            if (max < integers[i]) {
                max = integers[i];
            }
        }
        return max;
    }
}