#include <iostream>

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

void hexDigits(int *numbers, int length) {
    for (int i = 0; i < length; i++) { 
        switch (numbers[i]) {
            case 0 :
            std::cout << i << " " << numbers[i] << " " << 0 << std::endl;
            break;
            case 1 :
            std::cout << i << " " << numbers[i] << " " << 1 << std::endl;
            break;
            case 2 :
            std::cout << i << " " << numbers[i] << " " << 2 << std::endl;
            break;
            case 3 :
            std::cout << i << " " << numbers[i] << " " << 3 << std::endl;
            break;
            case 4 :
            std::cout << i << " " << numbers[i] << " " << 4 << std::endl;
            break;
            case 5 :
            std::cout << i << " " << numbers[i] << " " << 5 << std::endl;
            break;
            case 6 :
            std::cout << i << " " << numbers[i] << " " << 6 << std::endl;
            break;
            case 7 :
            std::cout << i << " " << numbers[i] << " " << 7 << std::endl;
            break;
            case 8 :
            std::cout << i << " " << numbers[i] << " " << 8 << std::endl;
            break;
            case 9 :
            std::cout << i << " " << numbers[i] << " " << 9 << std::endl;
            break;
            case 10 :
            std::cout << i << " " << numbers[i] << " " << "A" << std::endl;
            break;
            case 11 :
            std::cout << i << " " << numbers[i] << " " << "B" << std::endl;
            break;
            case 12:
            std::cout << i << " " << numbers[i] << " " << "C" << std::endl;
            break;
            case 13:
            std::cout << i << " " << numbers[i] << " " << "D" << std::endl;
            break;
            case 14:
            std::cout << i << " " << numbers[i] << " " << "E" << std::endl;
            break;
            case 15:
            std::cout << i << " " << numbers[i] << " " << "F" << std::endl;
            break;
            default: 
            break;
        }
    }
}