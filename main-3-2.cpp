#include <iostream>

extern int *readNumber();
extern int *reverseArray(int *numbers1, int length);
extern bool equalArray(int *numbers1, int *numbers2, int length);


int main() {
    
    int length = 3; 
    int *ran_ray1 = new int[length];
    ran_ray1 = readNumber();
    int *ran_ray2 = reverseArray(ran_ray1, length);
    std::cout << equalArray(ran_ray1, ran_ray2, length);
    delete[] ran_ray1;
    delete[] ran_ray2;
    return 0;
}