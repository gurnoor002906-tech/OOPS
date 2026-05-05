#include <iostream>
using namespace std;

class ClassB;  

class ClassA{
    int a;

public:
    void setA(int x){
        a = x;
    }

    friend void add(ClassA, ClassB); 
};

class ClassB{
    int b;

public:
    void setB(int y){
        b = y;
    }

    friend void add(ClassA, ClassB);  
};

void add(ClassA obj1, ClassB obj2){
    int sum = obj1.a + obj2.b;
    cout << "Sum = " << sum << endl;
}

int main(){
    ClassA objA;
    ClassB objB;

    objA.setA(10);
    objB.setB(20);

    add(objA, objB);  
    return 0;
}
