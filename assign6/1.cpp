#include <iostream>
#include <string>
using namespace std;

class Book{
public:
    string title;
    string author;
    int ISBN;
};

class Library{
public:
    Book arr[10];
    int count = 0;

    bool addNewBook(string &title, string &author, int &ISBN);
    bool removeBooks(int &ISBN);
    void displayDetails();
};

bool Library::addNewBook(string &title, string &author, int &ISBN){
    if (count >= 10)
        return false;

    arr[count].title = title;
    arr[count].author = author;
    arr[count].ISBN = ISBN;

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
        cout << "Book " << i + 1 << endl;
        cout << arr[i].title << endl;
        cout << arr[i].author << endl;
        cout << arr[i].ISBN << endl;
    }
}

int main(){
    Library L;

    for (int i = 0; i < 2; i++){
        string t, a;
        int is;

        cout << "Enter details of book " << i + 1 << endl;
        cout << "Title: ";
        cin >> t;
        cout << "Author: ";
        cin >> a;
        cout << "ISBN: ";
        cin >> is;

        L.addNewBook(t, a, is);
    }

    L.displayDetails();

    int del;
    cout << "Enter ISBN to delete: ";
    cin >> del;

    L.removeBooks(del);
    L.displayDetails();

    return 0;
}
