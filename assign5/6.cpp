// Implement a base class Book with attributes title, author, and price. Then, create a derived class Textbook that inherits from Book and adds a new attribute subject. Demonstrate how single inheritance is used to manage the data for general books and textbooks.
#include <iostream>
using namespace std;

class book
{
public:
    string title;
    string author;
    float price;
};

class textbook : public book
{
public:
    string subject;

    void display(textbook s)
    {
        cout << "title " << s.title << endl;
        cout << "author " << s.author << endl;
        cout << "price " << s.price << endl;
        cout << "subject " << s.subject << endl;
        cout << endl;
    }
};

int main()
{
    textbook A[3];
    for (int i = 0; i <= 2; i++)
    {
        cout << "title " << endl;
        cin >> A[i].title;
        cout << "author " << endl;
        cin >> A[i].author;
        cout << "price " << endl;
        cin >> A[i].price;
        cout << "subject " << endl;
        cin >> A[i].subject;
        cout<<endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        A[i].display(A[i]);
        cout << endl;
    }

    return 0;
}
