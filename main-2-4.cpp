#include <iostream>

extern int sum_min_max(int integers[], int length); 

extern int array_min(int integers[], int length);

extern int array_max(int integers[], int length);

int main() {
    int array[] = {0,1,2,3,4,5,6};
    int count = 7;

    std::cout << array_max(array, count) << std::endl;
    std::cout << array_min(array, count) << std::endl;
    std::cout << sum_min_max(array, count) << std::endl;
    return 0;
}

