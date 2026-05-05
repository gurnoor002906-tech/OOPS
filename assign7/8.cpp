#include<iostream>
using namespace std;

class Array{
    int a[5];

public:
    void input(){
        cout<<"Enter 5 elements:\n";
        for(int i=0;i<5;i++)
            cin>>a[i];
    }

    int& operator[](int index){
        if(index<0 || index>=5){
            cout<<"Index out of bounds\n";
            exit(0);
        }
        return a[index];
    }
};

int main(){
    Array arr;
    arr.input();

    cout<<"Element at index 2: "<<arr[2]<<endl;

    cout<<"Accessing invalid index:\n";
    cout<<arr[7];  

    return 0;
}
