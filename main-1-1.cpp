#include <iostream>

extern int *readNumber();
extern void printNumbers(int *numbers, int length);

int main() {
    int *array = new int[10];
    int len = 10;

    array = readNumber();
    printNumbers(array, len);
    delete[] array;
    return 0;
}