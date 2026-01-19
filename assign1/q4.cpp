//4. Write a C++ program that asks for a temperature in Celsius and displays it in Fahrenheit.(Formula: F = (9/5 × C) + 32).
#include<iostream>
using namespace std ;
int main() {
 float c,f;
 cout<<"Enter temperature in Celsius:";
 cin>> c;
 f=(9.0/5)*c+32;
 cout<<"Temperature in Fahrenheit: "<<f<<endl;
 return 0;
}
