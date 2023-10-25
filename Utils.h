#pragma once 
#include "Cell.h"
#include <tuple>
#include <cmath>
#include "stdlib.h"

class Utils {
    public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
        std::tuple<int, int> random_position = std::make_tuple(rand() % gridWidth, rand() % gridHeight);
        return random_position;
    }  
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int , int> pos2) {
        double distance;
        distance = sqrt(pow(std::get<0>(pos1) - std::get<0>(pos2), 2) + pow(std::get<1>(pos1) - std::get<1>(pos2), 2));
        return distance;
    }
};