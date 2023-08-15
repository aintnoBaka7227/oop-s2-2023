#include <iostream>

int *readNumbers() {
    int *ran = new int[10];
    //std::cout << "Enter 10 integers: ";
    for(int i = 0; i < 10; i++) {
        std::cin >> ran[i];
    }
    return ran;
}



int secondSmallestSum (int *number, int length) {
    int smallest = number[0];
    int second_smallest = number[0] + number[1];
    // go through each index
    for (int i = 0; i < length; i++) {
        // temporary sum of each sub
        int sum = 0;
        // calculating the sum of each sub
        for (int j = i; j < length; j++) {
            sum = sum + number[j];
            // check smallest
            if (sum < smallest) {
                second_smallest = smallest; 
                smallest = sum;
                
            }
            // check second smallest
            if (sum > smallest && sum < second_smallest) {
                second_smallest = sum;
            }
        }
    }
    return second_smallest;
}