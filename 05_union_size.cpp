#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;

    cout << "Size of union = " << sizeof(d) << " bytes" << endl;
    return 0;
}
