#include<iostream>
using namespace std;

class Data{
    int arr[100], n;

public:
    void operator()(int a[], int size){
        n = size;
        for(int i=0;i<n;i++)
            arr[i] = a[i];
    }

    void display(){
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Data d;
    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    int a[100];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
        cin>>a[i];

    d(a,n);
    d.display();

    return 0;
}
