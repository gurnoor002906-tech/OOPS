#include<iostream>
using namespace std;

template <class T>
class Arithmetic{
    T a, b;

public:
    Arithmetic(T x, T y){
        a = x;
        b = y;
    }

    void add(){
        cout<<"Addition: "<<a + b<<endl;
    }

    void sub(){
        cout<<"Subtraction: "<<a - b<<endl;
    }

    void mul(){
        cout<<"Multiplication: "<<a * b<<endl;
    }

    void div(){
        cout<<"Division: "<<a / b<<endl;
    }
};

int main(){
    Arithmetic<int> obj1(10,5);
    obj1.add();
    obj1.sub();
    obj1.mul();
    obj1.div();

    Arithmetic<float> obj2(5.5,2.2);
    obj2.add();
    obj2.sub();
    obj2.mul();
    obj2.div();

    return 0;
}
