#include <iostream>
using namespace std;

class Complex{
    int real, imag;

public:
    Complex(int r, int i){
        real = r;
        imag = i;
    }

    Complex(const Complex &c){
        real = c.real;
        imag = c.imag;
    }

    void display(){
        cout << real << " + " << imag << "i" << endl;
    }

    void sum(Complex c1, Complex c2){
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main(){
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1;

    cout << "First: ";
    c1.display();

    cout << "Second: ";
    c2.display();

    cout << "Copy: ";
    c3.display();

    Complex result(0, 0);
    result.sum(c1, c2);

    cout << "Sum: ";
    result.display();

    return 0;
}
