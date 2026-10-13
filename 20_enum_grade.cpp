#include <iostream>
using namespace std;

enum Grade { A = 90, B = 80, C = 70, D = 60, F = 50 };

int main() {
    Grade g = B;

    cout << "Grade value = " << g << endl;
    return 0;
}
