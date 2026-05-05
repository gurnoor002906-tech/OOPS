#include<iostream>
using namespace std;

class Test{
    float x;

public:
    void input(){
        cout<<"Enter value: ";
        cin>>x;
    }

    operator float(){
        return x;
    }
};

int main(){
    Test t;
    t.input();

    float num;
    num = t;   // conversion happens here

    cout<<"Float value: "<<num<<endl;

    return 0;
}
