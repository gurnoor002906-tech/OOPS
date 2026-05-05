#include<iostream>
using namespace std;

template <class T>
class Queue{
    T arr[100];
    int front, rear;

public:
    Queue(){
        front = -1;
        rear = -1;
    }

    void enqueue(T x){
        if(rear == 99){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        if(front == -1) front = 0;
        arr[++rear] = x;
    }

    void dequeue(){
        if(front == -1 || front > rear){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        cout<<"Dequeued: "<<arr[front++]<<endl;
    }

    void display(){
        if(front == -1 || front > rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Queue<int> q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.display();
    q1.dequeue();
    q1.display();

    Queue<float> q2;
    q2.enqueue(1.1);
    q2.enqueue(2.2);
    q2.display();

    return 0;
}
