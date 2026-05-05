#include<iostream>
using namespace std;

template <class T>
class Stack{
    T arr[100];
    int top;

public:
    Stack(){
        top = -1;
    }

    void push(T x){
        if(top == 99){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        arr[++top] = x;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        cout<<"Popped: "<<arr[top--]<<endl;
    }

    void display(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        for(int i=top;i>=0;i--)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.display();

    Stack<float> s2;
    s2.push(1.1);
    s2.push(2.2);
    s2.display();

    return 0;
}
