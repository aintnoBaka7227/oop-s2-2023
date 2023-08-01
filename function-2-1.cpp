#include <iostream>
#include <string>

void print_binary_string(std::string decimal_number) {
  if (decimal_number == "0") {
    std::cout << "0" << std::endl;
  } 
  else {
    int real_decimal = 0;
    int len = decimal_number.length();

    for (int i = 0; i < len; i++) {
      real_decimal = real_decimal * 10 + (decimal_number[i] - 48);
    }

    int remainder = 0;
    std::string reverse_binary = "";
    while (real_decimal != 0 || remainder != 1) {
      remainder = real_decimal % 2;
      reverse_binary = reverse_binary + std::to_string(remainder);
      real_decimal = (real_decimal - remainder) / 2;
    }

    std::string binary = "";
    for (int i = reverse_binary.length(); i > -1; i--) {
      binary = binary + reverse_binary[i];
    }

    std::cout << binary << std::endl;
  }
}
