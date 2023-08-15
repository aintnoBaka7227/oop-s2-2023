#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern void hexDigits(int *numbers, int length);

int main() {
    int *array = new int[10];
    int len = 10;

    array = readNumbers();
    hexDigits(array, len);
    delete[] array;
    return 0;
}