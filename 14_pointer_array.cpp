#include <iostream>
using namespace std;

int main() {
    int a[5] = {2, 4, 6, 8, 10};
    int *p = a;

    cout << "Array values: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
    return 0;
}
