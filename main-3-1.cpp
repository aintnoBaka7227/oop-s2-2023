#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {

    int ran_num[] = {1,2,3,2,1};
    int len = 5;
  
    std::cout << is_fanarray(ran_num, len) << std::endl;

    return 0;
}