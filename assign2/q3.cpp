#include <iostream>
using namespace std;

class Demo {
private:
    void privateFunction() {
        cout << "INSIDE PRIVATE FUNCTION" << endl;
    }

public:
    void publicFunction() {
        cout << "PUBLIC FUNCTION" << endl;
        privateFunction();
    }
};

int main() {
    Demo obj;
    obj.publicFunction();
    return 0;
}
