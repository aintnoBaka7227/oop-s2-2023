#include <iostream>

void two_five_nine(int array[], int n) {
    // check array size
    if (n < 1) {
        std::cout << "2:0;5:0;9:0" << '\n';
    }
    else {

        // initialize count variables
        int count_two = 0;
        int count_five = 0;
        int count_nine = 0;

        // check number of 2, 5, 9 in the array
        for (int i = 0; i < n; i++) {
            switch (array[i]) {
                case 2:
                    count_two++;
                    break;
                case 5:
                    count_five++;
                    break;
                case 9: 
                    count_nine++;
                    break;
                default:
                    break;
            }
        }
        // print out result
        std::cout << "2:" << count_two << ";";
        std::cout << "5:" << count_five << ";";
        std::cout << "9:" << count_nine << ";" <<'\n';
    }
}

