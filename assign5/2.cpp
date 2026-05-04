#include <iostream>
using namespace std;

class student;

class school
{
private:
    string name;

protected:
    int rank;

public:
    int nosstud;
    void getname(string names1)
    {
        name = names1;
    }
    void details()
    {
        cout << "name of school is  " << name << endl;
        cout << "rank is " << rank << endl;
        cout << "no of students is " << nosstud << endl;
        return;
    }
};

class student:public school{
    private:
    public:
    string student_name;
    int getrank(int num){
        rank=num; //rank has been accessed by child class which was protected in base class 
        return rank;
    }

    

};
int main()
{
    student B;
    int rnk=B.getrank(23);
    B.getname("gnps");
    B.student_name="karman";
    B.nosstud=1009;
    cout<<"name of student is "<<B.student_name<<endl;
    B.details();
    return 0;

}
