#include <iostream>

extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
    
    int length = 3; 
    int *ran_ray1 = new int[length];
    int *ran_ray2 = new int[length];
    ran_ray1 = readNumbers();
    ran_ray2 = readNumbers();

    std::cout << equalsArray(ran_ray1, ran_ray2, length);
    delete[]ran_ray1;
    delete[]ran_ray2;
    return 0;
}