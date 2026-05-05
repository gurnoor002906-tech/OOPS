#include<iostream>
using namespace std;

// 1. Single parameter
template <class T>
void process(T a){
    cout<<"Single parameter: "<<a<<endl;
}

// 2. Two parameters (same type)
template <class T>
void process(T a, T b){
    cout<<"Two same type: "<<a<<" "<<b<<endl;
}

// 3. Two parameters (different types)
template <class T1, class T2>
void process(T1 a, T2 b){
    cout<<"Two different types: "<<a<<" "<<b<<endl;
}

int main(){
    process(10);            // single
    process(5, 6);          // same type
    process(5, 2.5);        // different types
    process('A', 100);      // different types

    return 0;
}
