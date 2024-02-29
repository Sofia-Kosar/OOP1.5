#pragma once
#include <string>
#include "Triad.h"

using namespace std;

class Date {
private:
    Triad t;

public:
    Triad getTriad() const { return t; }
    void setTriad(const Triad& tValue) { t = tValue; }

    void Init(const Triad& t);
    void Display() const;
    void Read();
    bool Le(const Date& d) const;
    bool Eq(const Date& d) const;
    bool Gt(const Date& d) const;
    bool Ne(const Date& d) const;
    bool Leq(const Date& d) const;
    bool Gtq(const Date& d) const;
    string toString() const;
};
