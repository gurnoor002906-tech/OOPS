#include<iostream>
using namespace std;

class Shape{
public:
    virtual void area()=0;
    virtual void display()=0;
};

class Circle:public Shape{
    float r;
public:
    Circle(float x){r=x;}
    void area(){cout<<"Area: "<<3.14*r*r<<endl;}
    void display(){cout<<"Circle"<<endl;}
};

class Rectangle:public Shape{
    float l,b;
public:
    Rectangle(float x,float y){l=x;b=y;}
    void area(){cout<<"Area: "<<l*b<<endl;}
    void display(){cout<<"Rectangle"<<endl;}
};

class Triangle:public Shape{
    float b,h;
public:
    Triangle(float x,float y){b=x;h=y;}
    void area(){cout<<"Area: "<<0.5*b*h<<endl;}
    void display(){cout<<"Triangle"<<endl;}
};

int main(){
    Shape* s;
    Circle c(5);
    Rectangle r(4,6);
    Triangle t(3,8);

    s=&c; s->display(); s->area();
    s=&r; s->display(); s->area();
    s=&t; s->display(); s->area();

    return 0;
}
