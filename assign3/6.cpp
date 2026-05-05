#include <iostream>
using namespace std;

class Number{
public:
    int x;

    void setData(int a){
        x = a;
    }

    void showData(){
        cout << "Value = " << x << endl;
    }
};

Number addTen(Number n){
    n.x = n.x + 10;   
    return n;        
}

int main(){
    Number n1, n2;

    n1.setData(10);
    cout << "Before function call:" << endl;
    n1.showData();

    n2 = addTen(n1);   
    cout << "After function call (returned object):" << endl;
    n2.showData();

    cout << "Original object:" << endl;
    n1.showData();

    return 0;
}
