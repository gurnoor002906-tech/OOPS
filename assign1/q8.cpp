// 8. Write a program to calculate the library fine for late return of a book using the following rules:
// • For the first 5 days, the fine is 50 paise per day.
// • For 6–10 days, the fine is 1 rupee per day.
// • For more than 10 days, the fine is 5 rupees per day.
// • If the book is returned after 30 days, the membership is cancelled. 
// The program should accept the number of late days and display the fine or an appropriate 
// message.

#include<iostream>
using namespace std;
int main(){
int d;
float f=0;
cout<<"number of days "<<endl;
cin>>d;
cout<<"Fine is :";
if(d<=5) 
  f=d*0.5;
else if(d<=10)
  f=5*0.5+(d-5)*1;
else if(d<=30)
  f=5*0.5+5*1+(d-10)*5;
else
cout<<"Membership cancelled";

cout<<f;
return 0;
}
