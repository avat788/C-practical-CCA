#include <iostream>
using namespace std;

int main() {
    int a[5];

    cout << "Enter 5 numbers: \n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    cout << "Reverse order: ";
    for (int i = 4; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
