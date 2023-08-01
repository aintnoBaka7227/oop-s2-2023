#include <iostream>

void count_digits(int array[4][4]) {
    int zero = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            switch (array[i][j]) {
                case 0:
                    zero ++;
                    break;
                case 1: 
                    one ++;
                    break;
                case 2: 
                    two ++;
                    break;
                case 3:
                    three ++;
                    break;
                case 4: 
                    four ++;
                    break;
                case 5: 
                    five ++;
                    break;
                case 6: 
                    six ++;
                    break;
                case 7:
                    seven ++;
                    break;
                case 8: 
                    eight ++;
                    break;
                case 9:
                    nine ++;
                    break;
                default: 
                    break;
            }
        }
    }

    std::cout << "0:" << zero << ";";
    std::cout << "1:" << one << ";";
    std::cout << "2:" << two << ";";
    std::cout << "3:" << three << ";";
    std::cout << "4:" << four << ";";
    std::cout << "5:" << five << ";";
    std::cout << "6:" << six << ";";
    std::cout << "7:" << seven << ";";
    std::cout << "8:" << eight << ";";
    std::cout << "9:" << nine << ";" << '\n';

}