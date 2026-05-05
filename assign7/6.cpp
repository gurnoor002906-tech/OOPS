#include<iostream>
using namespace std;

class STRING{
    string str;

public:
    void input(){
        getline(cin,str);
    }

    bool operator==(STRING s){
        return str == s.str;
    }

    STRING operator+(STRING s){
        STRING temp;
        temp.str = str + s.str;
        return temp;
    }

    void display(){
        cout<<str<<endl;
    }
};

int main(){
    STRING s1,s2,s3;

    cout<<"Enter first string: ";
    s1.input();

    cout<<"Enter second string: ";
    s2.input();

    if(s1==s2)
        cout<<"Strings are equal"<<endl;
    else
        cout<<"Strings are not equal"<<endl;

    s3 = s1 + s2;
    cout<<"Concatenated string: ";
    s3.display();

    return 0;
}
