#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;

    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateDetails() {
        addDetails();
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
    }

    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }

    void displayDetails() {
        cout << "\nName: " << name
             << "\nRoll No: " << rollNo
             << "\nDegree: " << degree
             << "\nHostel: " << hostel
             << "\nCGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;
    string what ;
    s.addDetails();
    cout<<"do you wish to change your anything (if yes ,type c for cg and h for hostel , if no type no)?"<<endl;
    cin>>what;
    if(what=="c")
    {s.updateCGPA();
    s.displayDetails();
    }
    else if(what =="h")
    {s.updateHostel();
    s.displayDetails();
    }

    else
        {s.displayDetails();}
    return 0;
}
