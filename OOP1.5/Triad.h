#pragma once
#include <string>
#include <sstream>

using namespace std;

class Triad {
private:
    int first;
    int second;
    int third;

public:
    int getFirst() const { return first; }
    void setFirst(int value) { first = value; }
    int getSecond() const { return second; }
    void setSecond(int value) { second = value; }
    int getThird() const { return third; }
    void setThird(int value) { third = value; }

    void Init(int firstValue, int secondValue, int thirdValue);
    void Display() const;
    void Read();
    bool Le(const Triad& t) const;
    bool Eq(const Triad& t) const;
    bool Gt(const Triad& t) const;
    bool Ne(const Triad& t) const;
    bool Leq(const Triad& t) const;
    bool Gtq(const Triad& t) const;
    string toString() const;
    double check();
};
