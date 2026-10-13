#include <iostream>
using namespace std;

struct Book {
    char title[30];
    char author[30];
    int price;
};

int main() {
    Book b;

    cout << "Enter title: ";
    cin >> b.title;
    cout << "Enter author: ";
    cin >> b.author;
    cout << "Enter price: ";
    cin >> b.price;

    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price: " << b.price << endl;
    return 0;
}
