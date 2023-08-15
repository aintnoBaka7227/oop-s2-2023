#include <iostream>

int *readNumber() {
    int *ran = new int[10];
    std::cout << "Enter 10 integers: ";
    for(int i = 0; i < 10; i++) {
        std::cin >> ran[i];
    }
    return ran;
}

void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << numbers[i] << std::endl;
    }
}