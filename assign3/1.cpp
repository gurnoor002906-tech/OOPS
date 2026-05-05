#include <iostream>
using namespace std;

class B;  

class A{
private:
    int x;

public:
    void setData(int a){
        x = a;
    }

    void showData(){
        cout << "Value of x in class A: " << x << endl;
    }

    friend void swapData(A &, B &);
};

class B{
private:
    int y;

public:
    void setData(int b){
        y = b;
    }

    void showData(){
        cout << "Value of y in class B: " << y << endl;
    }

    friend void swapData(A &, B &);
};

void swapData(A &obj1, B &obj2){
    int temp;
    temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}

int main(){
    A objA;
    B objB;

    objA.setData(10);
    objB.setData(20);

    cout << "Before Swapping:" << endl;
    objA.showData();
    objB.showData();

    swapData(objA, objB);

    cout << "\nAfter Swapping:" << endl;
    objA.showData();
    objB.showData();

    return 0;
}
