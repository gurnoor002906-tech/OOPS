#include <iostream>
using namespace std;

class student
{

    int id;
    int marks;
    string name;

public:
    void input()
    {
        int id1;
        float marks1;
        string name1;
        cout << "enter details" << endl;
        cin >> id1 >> marks1 >> name1;
        id = id1;
        name = name1;
        marks = marks1;
    }
    void display()
    {
        cout << "id = " << id << endl;
        cout << "marks = " << marks << endl;
        cout << "name = " << name << endl;
    }
    int putid()
    {
        return id;
    }
};

int main()
{
    int *n = new int;
    cout << "enter number of students" << endl;
    cin >> *n;
    student *arr = new student[*n]; // array of students but dynamic

    for (int i = 0; i < (*n); i++)
    {
        arr[i].input();
    }
    int choice;
    do
    {
        cout << "\n1. Add Student\n2. Delete Student\n3. Search Student\n4. Display All\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

        {
            student *newarr = new student[*n + 1];
            for (int i = 0; i < *n; i++)
            {
                newarr[i] = arr[i];
            }
            cout << "enter details of new student " << endl;
            newarr[*n].input();
            delete[] arr;
            arr = newarr;
            (*n)++;
            break;
        }

        case 2:
        {
            int id;
            cout << "enter id of student you wanna delete " << endl;
            cin >> id;
            int i;
            for (i = 0; i < (*n); i++)
            {
                if (arr[i].putid() == id)
                {
                    arr[i] = arr[i + 1];
                    i++;
                    break;
                }
            }
            for (; i < (*n); i++)
            {
                arr[i] = arr[i + 1];
            }
            (*n)--;
            break;
        }
        case 3:
        {
            int id;
            cout << "enter id of student you wanna search " << endl;
            cin >> id;
            bool count = false;
            for (int i = 0; i < (*n); i++)
            {
                if (arr[i].putid() == id)
                {
                    arr[i].display();
                    count = true;
                    break;
                }
            }
            if (count == false)
            {
                cout << "id not found" << endl;
            }
            break;
        }
        case 4:
        {
            for (int i = 0; i < (*n); i++)
            {
                arr[i].display();
            }
        } 
        break;
        }

    } while (choice != 5);
    cout<<"success"<<endl;
    return 0;
}
