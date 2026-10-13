#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

int main() {
    Complex c1 = {3.5, 2.4};
    Complex c2 = {1.2, 4.6};

    cout << "Complex numbers: " << c1.real << "+" << c1.imag << "i" << endl;
    cout << "Complex numbers: " << c2.real << "+" << c2.imag << "i" << endl;
    return 0;
}
