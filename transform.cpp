#include <iostream>
#include <cmath>
#include <string>

int convert(int number) {
    if (number == 0) {
        return 0;
    }
    else {
        int remainder;
        int converted_number = 0;
        std::string binary = "";
        while (number != remainder) {
           remainder = number % 2;
           number = (number - remainder) / 2;
           binary = binary + std::to_string(remainder);
        }
        for (int i = binary.length() - 1; i > -1; i--) {
            converted_number = converted_number * 10 + (binary[i] - 48);
        }
        return converted_number;
    }
}

int main() {
    int ran_number = 0;
    std::cout << "Enter a decimal number: ";
    std::cin >> ran_number;
    std::cout << convert(ran_number) << std::endl;
    return 0;
}