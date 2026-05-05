#include<iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template <class T>
void display(T arr[], int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int a[] = {5,2,9,1,3};
    bubbleSort(a,5);
    cout<<"Sorted int array: ";
    display(a,5);

    float b[] = {2.3,1.1,5.6,0.9};
    bubbleSort(b,4);
    cout<<"Sorted float array: ";
    display(b,4);

    return 0;
}
