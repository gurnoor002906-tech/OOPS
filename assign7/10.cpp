#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    friend ostream& operator<<(ostream& output, const Distance& D) {
        output << D.feet << "ft " << D.inches << "in";
        return output;
    }

    friend istream& operator>>(istream& input, Distance& D) {
        input >> D.feet >> D.inches;
        return input;
    }
};

int main() {
    Distance d1;

    cout << "Enter feet and inches: ";
    if (cin >> d1) {
        cout << "You entered: " << d1 << endl;
    }

    return 0;
}
