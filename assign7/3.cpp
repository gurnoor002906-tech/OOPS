#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Triangle {
public:
    double calculateArea(double base, double height) {
        return 0.5 * base * height;
    }

    double calculateArea(double side) {
        return (sqrt(3) / 4.0) * side * side;
    }

    float calculateArea(float a, float b) {
        return (b / 4.0) * sqrt((4 * a * a) - (b * b));
    }
};

int main() {
    Triangle t;

    cout << fixed << setprecision(2);

    cout << "Right-Angled: " << t.calculateArea(10.0, 5.0) << endl;
    cout << "Equilateral: " << t.calculateArea(6.0) << endl;
    cout << "Isosceles: " << t.calculateArea(8.0f, 6.0f) << endl;

    return 0;
}
