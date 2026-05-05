#include<iostream>
using namespace std;

template <class T1, class T2>
class Pair{
    T1 a;
    T2 b;

public:
    Pair(T1 x, T2 y){
        a = x;
        b = y;
    }

    void display(){
        cout<<"First: "<<a<<" Second: "<<b<<endl;
    }
};

int main(){
    Pair<int, int> p1(10, 20);
    p1.display();

    Pair<int, float> p2(5, 2.5);
    p2.display();

    Pair<string, int> p3("Seerat", 101);
    p3.display();

    return 0;
}
