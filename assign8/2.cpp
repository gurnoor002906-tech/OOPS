#include<iostream>
using namespace std;

template <class T>
T findMin(T arr[], int n){
    T min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int a[] = {5,2,8,1,9};
    cout<<"Min (int): "<<findMin(a,5)<<endl;

    float b[] = {2.3,1.1,5.6,0.9};
    cout<<"Min (float): "<<findMin(b,4)<<endl;

    return 0;
}
