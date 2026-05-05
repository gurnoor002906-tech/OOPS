#include<iostream>
using namespace std;

template <class T>
class Array{
    T arr[100];
    int n;

public:
    void input(){
        cout<<"Enter size: ";
        cin>>n;
        cout<<"Enter elements:\n";
        for(int i=0;i<n;i++)
            cin>>arr[i];
    }

    void display(){
        cout<<"Array elements: ";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Array<int> a1;
    a1.input();
    a1.display();

    Array<float> a2;
    a2.input();
    a2.display();

    return 0;
}
