#include <iostream>

extern int sum_if_palindrome(int integers[], int length);

extern bool is_palindrome(int integers[], int length);

extern  int sum_array_elements(int integers[], int length);


int main() {
    int array[] = {};
    int count = 0;

    std::cout << sum_array_elements(array, count) << std::endl;
    std::cout << is_palindrome(array, count) << std::endl;
    std::cout << sum_if_palindrome(array, count) << std::endl;

    return 0;
}