#include <iostream>

extern int *readNumbers();
extern int *reverseArray(int *numbers1, int length);
extern bool equalsArray(int *numbers1, int *numbers2, int length);


int main() {
    
    int length = 3; 
    int *ran_ray1 = new int[length];
    ran_ray1 = readNumbers();
    int *ran_ray2 = reverseArray(ran_ray1, length);
    std::cout << equalsArray(ran_ray1, ran_ray2, length);
    delete[] ran_ray1;
    delete[] ran_ray2;
    return 0;
}