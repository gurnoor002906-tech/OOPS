#include<iostream>
using namespace std ;
class Rectangle{
  int height ;
  int width ;
public:
    void getdata();
    void Calculatearea();
};

int main(){
  Rectangle R;
  R.getdata();
  R.Calculatearea();
  return 0;
  
}
void Rectangle::getdata(){
  int h , w;
  cout<<"enter height and width"<<endl;
  cin>>h>>w;
  height=h;
  width=w;
  return;
}

void Rectangle::Calculatearea(){
  int area = width*height ;
  cout<<"area is :"<<area<<endl;
  return;
}
