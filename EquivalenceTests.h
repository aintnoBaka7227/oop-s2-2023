#ifndef EQUIVALENCE_H
#define EQUIVALENCE_H
#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    void testZeroIntegers() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    void testSymetricIntergers() {
        Addition addition;
        if (addition.add(-3, 3) != 0) {
            std::cout << "test 4 failed!" << std::endl;
        }
    }
    
    void testBigIntegers() {
        Addition addition;
        if (addition.add(12, -36) != -24) {
            std::cout << "test 5 failed!" << std::endl;
        }
    }
    // Add other test functions here
};

#endif