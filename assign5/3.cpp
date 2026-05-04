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

class student:private school{
    private:
    public:
    string student_name;
    int getrank(int num){
        rank=num; 
        return rank;
    }
    
    void get_numberofstudents(int nume, string name56 ){
        nosstud=nume;
        getname(name56);
    }
    int putstudents(){
        return nosstud;
    }
    
void show_details(){
        details();
    }

};

//protected inheritance is same as private ,  how the base class members are re-exposed in the derived class differ
int main()
{
    student B;
    int rnk=B.getrank(23);
    B.student_name="karman";
    B.get_numberofstudents(67,"gnps");
    cout<<"name of student is "<<B.student_name<<endl;
    //B.getname("gnps"); all these could have been accessed if they were inherited
    //B.nosstud=1009;
    //B.details(); everything was privately ingherited by child so they cant be used directly here
    B.show_details(); 
    return 0;

}
