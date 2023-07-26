#include <iostream>

extern int median_array(int array[], int n);

int main() {
    int ran_num[] = {3,6,2,1,4};
    int len = 5;

    std::cout << median_array(ran_num, len) << std::endl;

    return 0;

}