#include <iostream>
using namespace std;

int main() {
    char name[20];
    char *p = name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Name is: ";
    while (*p != '\0') {
        cout << *p;
        p++;
    }
    cout << endl;
    return 0;
}
