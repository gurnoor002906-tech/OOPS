#include <iostream>
#include <string>
using namespace std;

class Book{
public:
    string title;
    string author;
    int ISBN;

    Book(){
        title = "";
        author = "";
        ISBN = 0;
    }

    Book(string title, string author, int ISBN){
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &b){
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library{
public:
    Book arr[10];
    int count;

    Library(){
        count = 0;
    }

    bool addNewBook(string &title, string &author, int &ISBN);
    bool removeBooks(int &ISBN);
    void displayDetails();
};

bool Library::addNewBook(string &title, string &author, int &ISBN){
    if (count >= 10)
        return false;

    arr[count] = Book(title, author, ISBN);
    count++;
    return true;
}

bool Library::removeBooks(int &ISBN){
    for (int i = 0; i < count; i++){
        if (arr[i].ISBN == ISBN){
            for (int j = i; j < count - 1; j++){
                arr[j] = arr[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

void Library::displayDetails(){
    for (int i = 0; i < count; i++){
        cout << "\nBook " << i + 1 << endl;
        cout << "Title: " << arr[i].title << endl;
        cout << "Author: " << arr[i].author << endl;
        cout << "ISBN: " << arr[i].ISBN << endl;
    }
}

int main(){
    Library L;

    for (int i = 0; i < 2; i++){
        string t, a;
        int is;

        cout << "Enter details of book " << i + 1 << endl;
        cin >> t >> a >> is;

        L.addNewBook(t, a, is);
    }

    L.displayDetails();

    int del;
    cout << "\nEnter ISBN to delete: ";
    cin >> del;

    L.removeBooks(del);

    cout << "\nAfter Deletion:\n";
    L.displayDetails();

    Book b1("C++", "Bjarne", 101);
    Book b2("DSA", "CLRS", 102);
    Book b3 = b1;

    Book *dynBook = new Book("OOP", "Stroustrup", 103);
    cout << "Dynamic Book: " << dynBook->title << endl;
    delete dynBook;

    return 0;
}
