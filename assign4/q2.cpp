// NO DEFAULT CONSTRUCTOR HERE
// #include<iostream>
// using namespace std ;

// class rectangle {
//     int length ;
//     int  breadth ;
//     public:
//     rectangle(){
//         length=0;
//         breadth=0;
//     }
//     rectangle(int val){
//         length = val;
//         breadth = val;
//     }
//     rectangle(int val,int brea){
//         length = val ;
//         breadth= brea;
//     }
//     int area(){
//         return length*breadth;
//     }
//     ~rectangle(){
//         cout<<"destructor called"<<endl;
//     }
// };
// int main (){
//     rectangle arr_r1[2];
//     int a, b;
//     for(int i=0;i<2;i++){
//         cout<<"enter value of length and breadth "<<endl;
//         cin>>a>>b;
//         arr_r1[i] = rectangle(a, b);
//         cout<<arr_r1[i].area()<<endl;
//         arr_r1[i] = rectangle(a);
//         cout<<arr_r1[i].area()<<endl;
//         arr_r1[i] = rectangle();
//         cout<<arr_r1[i].area()<<endl;
//     }
//     return 0;

// }
// DEFAULT CONSTRUCTOR HERE
#include<iostream>
using namespace std ;

class rectangle {
    int length ;
    int  breadth ;
    public:
    rectangle(int val=10,int val2=20){
        length=val;
        breadth=val2;
    }
    float area(){
        return length*breadth;
    }
    ~rectangle(){
        cout<<"destructor called"<<endl;
    }
};
int main (){
    rectangle arr_r1[2];
    int a, b;
    for(int i=0;i<2;i++){
        cout<<"enter value of length and breadth "<<endl;
        cin>>a>>b;
        arr_r1[i] = rectangle(a, b);
        cout<<arr_r1[i].area()<<endl;
        arr_r1[i] = rectangle(a);
        cout<<arr_r1[i].area()<<endl;
        arr_r1[i] = rectangle();
        cout<<arr_r1[i].area()<<endl;
    }
    return 0;

}
