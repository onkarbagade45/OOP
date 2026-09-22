#include <iostream>
using namespace std;

class book {
    int book_ID;
    string book_title;
    float book_price;

public:
    book() {
        book_ID = 0;
        book_title = "oop";
        book_price = 7.0;
    }

    book(int ID, string title, float price) {
        book_ID = ID;
        book_title = title;
        book_price = price;
    }

    void display() {
        cout << "book ID - " << book_ID << endl;
        cout << "book title - " << book_title << endl;
        cout << "book price - " << book_price << endl;
    }
};

int main() {
    book b1;

    book b2(786, "oop", 350.6);

    cout << "Book 1:" << endl;
    b1.display();

    cout << "\nBook 2:" << endl;
    b2.display();

    return 0;
}
