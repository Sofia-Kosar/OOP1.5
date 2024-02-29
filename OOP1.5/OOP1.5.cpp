#include "Date.h"
#include "Triad.h"
#include <iostream>
using namespace std;
int main()
{

        Triad t1, t2;

        
        cout << "Enter values for the first triad:" << endl;
        t1.Read();
        cout << "Enter values for the second triad:" << endl;
        t2.Read();

        
        cout << "First triad: ";
        t1.Display();
        cout << "Second triad: ";
        t2.Display();

        // Порівнюємо триади за різними критеріями
        if (t1.Leq(t2)) {
            cout << "First triad is less than or equal to the second triad." << endl;
        }
        else {
            cout << "First triad is greater than the second triad." << endl;
        }
        if (t1.Le(t2)) {
            cout << "First triad is less than  the second triad." << endl;
        }
        else {
            cout << "First triad is greater or equal than the second triad." << endl;
        }

        if (t1.Eq(t2)) {
            cout << "First triad is equal to the second triad." << endl;
        }
        else {
            cout << "First triad is not equal to the second triad." << endl;
        }

        if (t1.Ne(t2)) {
            cout << "First triad is not equal to the second triad." << endl;
        }
        else {
            cout << "First triad is equal to the second triad." << endl;
        }

        if (t1.Gt(t2)) {
            cout << "First triad is greater than the second triad." << endl;
        }
        else {
            cout << "First triad is less than or equal to the second triad." << endl;
        }
        if (t1.Gtq(t2)) {
            cout << "First triad is greater or equal than the second triad." << endl;
        }
        else {
            cout << "First triad is less than  the second triad." << endl;
        }

        // Створюємо два об'єкти дати
        Date d1, d2;

        // Ініціалізуємо об'єкти дати з об'єктами триади
        d1.Init(t1);
        d2.Init(t2);

        // Виводимо значення об'єктів дати
        cout << "First date: " << d1.toString() << endl;
        cout << "Second date: " << d2.toString() << endl;

        // Порівнюємо дати за різними критеріями
        if (d1.Leq(d2)) {
            cout << "First date is less than or equal to the second date." << endl;
        }
        else {
            cout << "First date is greater than the second date." << endl;
        }
        if (d1.Le(d2)) {
            cout << "First date is less than  the second date." << endl;
        }
        else {
            cout << "First date is greater or equal than the second date." << endl;
        }

        if (d1.Eq(d2)) {
            cout << "First date is equal to the second date." << endl;
        }
        else {
            cout << "First date is not equal to the second date." << endl;
        }

        if (d1.Ne(d2)) {
            cout << "First date is not equal to the second date." << endl;
        }
        else {
            cout << "First date is equal to the second date." << endl;
        }

        if (d1.Gt(d2)) {
            cout << "First date is greater than the second date." << endl;
        }
        else {
            cout << "First date is less than or equal to the second date." << endl;
        }
        if (d1.Gtq(d2)) {
            cout << "First date is greater or equal than the second date." << endl;
        }
        else {
            cout << "First date is less than  the second date." << endl;
        }

        return 0;
    }


