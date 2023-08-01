#include <iostream>

void print_summed(int array_1[3][3],int array_2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            array_1[i][j] = array_1[i][j] + array_2[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for ( int j = 0; j < 3; j++) {
            std::cout << array_1[i][j] << " ";
        }
        std::cout << std::endl;
    }
}