#include <iostream>
using namespace std;

int main() {
    int a[5], max, min;

    cout << "Enter 5 numbers: \n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        if (i == 0) {
            max = a[i];
            min = a[i];
        } else {
            if (a[i] > max) max = a[i];
            if (a[i] < min) min = a[i];
        }
    }

    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;
    return 0;
}
