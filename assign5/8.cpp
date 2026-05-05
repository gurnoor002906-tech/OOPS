#include<iostream>
using namespace std;

class LibraryUser {
protected:
    string name;
    int id;
    string contact;

public:
    void getname(string name1){
        name = name1;
    }
    void getid(int id1){
        id = id1;
    }
    void getcontact(string contact1){
        contact = contact1;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

class teacher : public LibraryUser {
    string dept;
public:
    void getdept(string d){
        dept = d;
    }
    void displayTeacher(){
        display();
        cout << "Department: " << dept << endl << endl;
    }
};

class student : public LibraryUser {
    string grade;
public:
    void getgrade(string g){
        grade = g;
    }
    void displayStudent(){
        display();
        cout << "Grade: " << grade << endl << endl;
    }
};

int main(){
    student a;
    teacher b;

    a.getname("karman");
    a.getcontact("2345678901");
    a.getid(12);
    a.getgrade("A");

    b.getname("Seerat");
    b.getcontact("9876543210");
    b.getid(21);
    b.getdept("ENC");

    cout << "Student Details:\n";
    a.displayStudent();

    cout << "Teacher Details:\n";
    b.displayTeacher();
}
