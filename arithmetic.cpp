#include <iostream>
#include <cmath>

int* shift_left(int binary[], int n) {
    if ( n==0) {
        return NULL;
    }
    else if (n==1) {
        return binary;
    }
    else {
        int last = binary[0];
        for (int i = 1; i < n; i++) {
             //int clone = binary[i];
            binary[i - 1] = binary[i];
        }
        binary[n-1] = last;
        return binary;
    }
}


int main() {
    
    int ran_num [] = {0,1,0,1};
    int count = 4;
    int * left_shifted;
    left_shifted = shift_left(ran_num, count);
    for (int i = 0; i < count; i++) {
        std::cout << left_shifted[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}