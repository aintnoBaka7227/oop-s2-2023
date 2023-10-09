#ifndef  DEMOPAIR_H
#define DEMOPAIR_H

template <class T, class U>
class Pair {
    private:
    T x;
    U y;
    public:
    Pair(T x, U y) : x(x), y(y) {};
    Pair():Pair(0,0) {};
    void print();
};

template <class T, class U>

void Pair<T,U>::print() {
    std::cout << x << " " << y << std::endl;
}

#endif