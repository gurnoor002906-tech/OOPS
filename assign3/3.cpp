#include <iostream>
using namespace std;

class B;  

class A{
    int x;   

public:
    void setData(int a){
        x = a;
    }

    friend class B;
};

class B{
public:
    void showData(A obj){
        cout << "Value of x = " << obj.x << endl;
    }
};

int main(){
    A objA;
    B objB;
    objA.setData(100);
    objB.showData(objA); 

    return 0;
}
