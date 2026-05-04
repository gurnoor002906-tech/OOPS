// friend function usage has also been displayed other han parent and child relation

#include <iostream>
using namespace std;

class student;

class school
{
    string name;
    int rank;

public:
    int students;
    float average;
    void getname(string name1, int rank1)
    {
        name = name1;
        rank = rank1;
        return;
    }
    string putname()
    {
        return name;
    }

    int putrank()
    {
        return rank;
    }
};
class student : public school
{
    string stuname;

public:
    int marks;
    student(string a)
    {
        stuname = a;
    }
    friend void display(student B);
};

void display(student B)
{
    cout << "name of school is " << B.putname() << endl;
    cout << "name of student is " << B.stuname << endl;
    cout << "rank of school is " << B.putrank() << endl;
}

int main()
{
    student A("seerat");
    A.getname("gnps", 3);
    display(A);
}
