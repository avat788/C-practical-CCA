#include <iostream>
using namespace std;

enum Week { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

int main() {
    Week m = Apr;

    cout << "Month number = " << m << endl;
    return 0;
}
