#include <iostream>
#include <cmath>

extern int palindrome_sum(int integers[], int length);
extern bool is_array_palindrome(int integers[], int length);
extern int sum_integers(int integers[], int length);


int main () {
    int array[] = {-1, 2, 2, -1};
    int count = 4;

    std::cout << palindrome_sum(array, count) << std::endl;
    std::cout << is_array_palindrome(array, count) << std::endl;
    std::cout << sum_integers(array, count) << std::endl;

    return 0;
}