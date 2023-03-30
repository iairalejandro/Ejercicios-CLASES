#include <iostream>

#include "Date.h"

using namespace std;

int main() {

    int month, day, year;

    Date actual;

    cout << "Mes: ";
    cin >> month;
    actual.setMonth(month);

    cout << "Dia: ";
    cin >> day;
    actual.setDay(day);

    cout << "Anio: ";
    cin >> year;
    actual.setYear(year);

    cout << month << " / " << day << " / " << year << endl;

}