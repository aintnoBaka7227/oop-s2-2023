# pragma once
#include <iostream>

void changeValue(double *value);

void printArray(double *array, int count);

double arrayMax(double *array, int count);

double* dynamicArray(int n, double m);

void changeValue(double *value) {
    *value = 42;
}

void printArray(double *array, int count) {
    for (int i = 0; i <count; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << '\n';
}

double arrayMax(double *array, int count) {
    double max = array[0];
    for (int i = 1; i < count; i++) {
        if (max < array[i]) {
            max = array[i];
        }
    }
    return max;
}

double *dynamicArray(int n, double m) {
    double *dynamic_ranarray = new double[n];
    for (int i = 0; i < n; i++) {
        dynamic_ranarray[i] = m;
    }
    return dynamic_ranarray;
}




