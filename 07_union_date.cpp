#include <iostream>
using namespace std;

union Date {
    int day;
    int month;
    int year;
};

int main() {
    Date d;

    d.day = 12;
    cout << "Day = " << d.day << endl;
    d.month = 10;
    cout << "Month = " << d.month << endl;
    d.year = 2024;
    cout << "Year = " << d.year << endl;
    return 0;
}
