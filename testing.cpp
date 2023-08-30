#include <iostream>
#include <ctime>


int main() {
    std::time_t now = time(0);
    std::cout << now << std::endl;
    std::string t = ctime(&now);
    std::cout << t << std::endl;

    return 0;
}