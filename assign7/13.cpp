#include<iostream>
#include<cmath>
using namespace std;

class Polar{
    float r, theta;

public:
    Polar(float r1, float t1){
        r = r1;
        theta = t1;
    }

    float getR(){ return r; }
    float getTheta(){ return theta; }
};

class Cartesian{
    float x, y;

public:
    Cartesian(Polar p){
        x = p.getR() * cos(p.getTheta());
        y = p.getR() * sin(p.getTheta());
    }

    void show(){
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
};

int main(){
    Polar p(10, 5);
    Cartesian c = p;
    c.show();
    return 0;
}
