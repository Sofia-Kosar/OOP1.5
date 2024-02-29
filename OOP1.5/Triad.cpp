#include "Triad.h"
#include <iostream>

using namespace std;

void Triad::Init(int firstValue, int secondValue, int thirdValue) {
    setFirst(firstValue);
    setSecond(secondValue);
    setThird(thirdValue);
}

void Triad::Display() const {
    cout << first << "." << second << "." << third << endl;
}

void Triad::Read() {
    int firstValue;
    int secondValue;
    int thirdValue;
    cout << "Enter triad " << endl << endl;
    cout << "first =  "; cin >> firstValue;
    cout << "second =  "; cin >> secondValue;
    cout << "third =  "; cin >> thirdValue;
    Init(firstValue, secondValue, thirdValue);
}

bool Triad::Le(const Triad& t) const {
    if (first != t.first) return first < t.first;
    if (second != t.second) return second < t.second;
    return third < t.third;
}

bool Triad::Leq(const Triad& t) const {
    return Le(t) || Eq(t);
}

bool Triad::Eq(const Triad& t) const {
    return first == t.first && second == t.second && third == t.third;
}

bool Triad::Ne(const Triad& t) const {
    return !Eq(t);
}

bool Triad::Gt(const Triad& t) const {
    return !Leq(t);
}

bool Triad::Gtq(const Triad& t) const {
    return !Le(t);
}

string Triad::toString() const {
    stringstream sout;
    sout << first << "." << second << "." << third;
    return sout.str();
}

double Triad::check() {
    return first > second;
}
