#include "Date.h"
#include <iostream>

using namespace std;

void Date::Init(const Triad& tValue) {
    setTriad(tValue);
}

void Date::Display() const {
    t.Display();
}

void Date::Read() {
    Triad tValue;
    tValue.Read();
    Init(tValue);
}

bool Date::Le(const Date& d) const {
    return t.Le(d.getTriad());
}

bool Date::Leq(const Date& d) const {
    return t.Leq(d.getTriad());
}

bool Date::Eq(const Date& d) const {
    return t.Eq(d.getTriad());
}

bool Date::Ne(const Date& d) const {
    return t.Ne(d.getTriad());
}

bool Date::Gt(const Date& d) const {
    return t.Gt(d.getTriad());
}

bool Date::Gtq(const Date& d) const {
    return t.Gtq(d.getTriad());
}

string Date::toString() const {
    return t.toString();
}
