#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    Employee e = {101, "Rahul", 25000.5};

    cout << "Employee ID: " << e.id << endl;
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;
    return 0;
}
