#include <iostream>

extern void print_binary_string(std::string decimal_number);

int main() {

    std::string ran_decimal;
    std::cout << "Input decimal number: ";
    std::cin >> ran_decimal;
    print_binary_string(ran_decimal);
    return 0;
}