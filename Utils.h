#ifndef UTILS
#define UTILS
#include <tuple>
#include <cmath>
#include <cstdlib>

class Utils {
    public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        int ran_x = rand() % gridWidth;
        int ran_y = rand() % gridHeight;
        std::tuple<int, int> random(ran_x, ran_y);
        return random;
    }

    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
        double distance = sqrt(pow((std::get<0>(pos1) + std::get<0>(pos2)), 2) + pow((std::get<1>(pos1) + std::get<1>(pos2)), 2));
    }

};

#endif