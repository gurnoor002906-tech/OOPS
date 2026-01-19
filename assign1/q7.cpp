//7. Write a program to swap two numbers using a bitwise operator.
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Intergers a and b respectively are :";
cin>>a>>b;
a=a^b;
b=a^b;
a=a^b;
cout<<"a:"<<a<<endl<<"b:"<<b;
return 0;
}
