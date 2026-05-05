#include<iostream>
using namespace std;

template <class T>
int linearSearch(T arr[], int n, T key){
    for(int i=0;i<n;i++){
        if(arr[i] == key)
            return i;   // return index if found
    }
    return -1;          // not found
}

int main(){
    int a[] = {10,20,30,40};
    int pos = linearSearch(a,4,30);
    cout<<"Position (int): "<<pos<<endl;

    float b[] = {1.1,2.2,3.3};
    int pos2 = linearSearch(b,3,2.2);
    cout<<"Position (float): "<<pos2<<endl;

    return 0;
}
