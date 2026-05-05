#include<iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int x=10, y=20;
    swapValues(x,y);
    cout<<"After swap: "<<x<<" "<<y<<endl;

    float p=1.5, q=2.5;
    swapValues(p,q);
    cout<<"After swap: "<<p<<" "<<q<<endl;

    return 0;
}
