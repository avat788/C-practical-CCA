#include <iostream>
using namespace std;

union Number {
    int x;
    float y;
};

int main() {
    Number n;

    cout << "Enter an integer: ";
    cin >> n.x;
    cout << "Integer value = " << n.x << endl;

    cout << "Enter a float: ";
    cin >> n.y;
    cout << "Float value = " << n.y << endl;
    return 0;
}
