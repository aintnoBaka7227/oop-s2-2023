#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main() {
    int ran[4][4];
    std::cout << "Enter an 4x4 matrix:" << std::endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> ran[i][j];
        }
    }

    std::cout << "Diagonal sum is " << sum_diagonal(ran) << std::endl;
}
