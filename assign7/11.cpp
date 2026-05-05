#include<iostream>
using namespace std;

class Test{
    float x;

public:
    Test(float f){
        x = f;
    }

    void display(){
        cout<<"Value in object: "<<x<<endl;
    }
};

int main(){
    float num;

    cout<<"Enter a float value: ";
    cin>>num;

    Test t = num;   
    t.display();

    return 0;
}
