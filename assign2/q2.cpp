#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void showUpdateMessage() {
        cout << "Record updated successfully.\n";
    }

    void printBasicDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
    }

public:
    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Degree: ";
        cin >> degree;

        cout << "Enter Hostel: ";
        cin >> hostel;

        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails() {
        cout << "\nEnter New Name: ";
        cin >> name;

        cout << "Enter New Degree: ";
        cin >> degree;

        showUpdateMessage();
    }

    void updateCGPA() {
        cout << "\nEnter New CGPA: ";
        cin >> currentCGPA;

        showUpdateMessage();
    }

    void updateHostel() {
        cout << "\nEnter New Hostel: ";
        cin >> hostel;

        showUpdateMessage();
    }

    void displayDetails() {
        cout << "Student Details"<<endl;

        printBasicDetails();

        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student s;

    s.addDetails();
    s.displayDetails();

    s.updateCGPA();
    s.updateHostel();
    s.updateDetails();

    s.displayDetails();

    return 0;
}
