#include <iostream>
#include "demo.h"
#include "demopair.h"

typedef Move<int> Move_i;
typedef Move<double> Move_d;

typedef Pair<double, double> Pair_d;
typedef Pair<int, int> Pair_i;

int main() {

    // demo

    Move<int> move1(1,2);
    move1.print();
    Move<double> move2(1.1, 2.1);
    move2.print();
    Move<int> move3(1,2.1);
    move3.print();

    Move<int>* move4 = new Move<int>(1,2);
    move4->print();

    Move_i move5(2,4);
    move5.print();

    Move_d* move6 = new Move_d(2,4);
    move6->print();


    // demopair
    Pair<int, int> pair1(1,2);
    pair1.print();
    Pair<double, int> pair2(2.1, 2);
    pair2.print();
    Pair<double, double> pair3(3.1, 2);
    pair3.print();

    Pair<int, int>* pair4 = new Pair<int, int>(1.1, 2.1);
    pair4->print();

    Pair_i* pair5 = new Pair_i(1.1, 2.1);
    pair5->print();

    Pair pair6(pair1, pair2);
    Pair pair7(pair1, *pair4);



    return 0;
}