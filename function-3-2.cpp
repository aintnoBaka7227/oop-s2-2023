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

bool equalArray(int *numbers1, int *numbers2, int length) {
    if (length <= 0) {
        return false;
    }
    else {
        for (int i = 0; i < length; i++ ) {
            if (numbers1[i] != numbers2[i]) {
                return false;
            }
        }
        return true;
    }
}

int *reverseArray(int *numbers1, int length) {
    int *reverse_ray = new int[length];
    for (int i = 0; i < length; i++) {
        reverse_ray[i] = numbers1[length - 1 - i];
    }
    return reverse_ray;
}
