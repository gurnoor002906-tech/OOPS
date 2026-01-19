//5. Write a program to format console output using \n, \t, \b, endl, and setw within cout statements.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
cout<<"A\nB"<<endl;
cout<<"A\tB"<<endl;
cout<<"AB\bC"<<endl;
cout<<setw(10)<<"ab";
return 0;
}
