#include<iostream>
using namespace std ;

class rectangle {
    int length ;
    int  breadth ;
    public:
    rectangle(){
        length=0;
        breadth=0;
    }
    rectangle(int val){
        length = val;
        breadth = val;
    }
    rectangle(int val,int brea){
        length = val ;
        breadth= brea;
    }
    int area(){
        return length*breadth;
    }
};
int main (){
    rectangle r1;
    rectangle r2(3);
    rectangle r3(4,5);
    cout<<"area of r1 "<<r1.area()<<endl;
    cout<<"area of r2 "<<r2.area()<<endl;
    cout<<"area of r3 "<<r3.area()<<endl;
    return 0;

}
