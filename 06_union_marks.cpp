#include <iostream>
using namespace std;

union Marks {
    int marksInt;
    float marksFloat;
};

int main() {
    Marks m;
    m.marksInt = 90;

    cout << "Marks in int: " << m.marksInt << endl;
    m.marksFloat = 88.5f;
    cout << "Marks in float: " << m.marksFloat << endl;
    return 0;
}
