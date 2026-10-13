#include <iostream>
using namespace std;

int main() {
    int a[10], even = 0, odd = 0;

    cout << "Enter 10 numbers: \n";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
    return 0;
}
