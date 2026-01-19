//10. Write a program to check whether a given number is even or odd using: 
// (a) if-else statement 
// (b) conditional operator

#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter a number:";
cin>>num;
if(num%2==0)
cout<<"Using if-else: Even number"<<endl;
else
cout<<"Using if-else: Odd number"<<endl;
cout<<"Using ternary operator:"<<((num%2==0)?" Even number":" Odd number");
return 0;
}
