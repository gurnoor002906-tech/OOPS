#include <iostream>
using namespace std;

/* =========================
   Speedometer Class
   ========================= */
class Speedometer {
protected:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    int getSpeed() {
        return speed;
    }
};

/* =========================
   FuelGauge Class
   ========================= */
class FuelGauge {
protected:
    float fuel;

public:
    void setFuel(float f) {
        fuel = f;
    }

    float getFuel() {
        return fuel;
    }
};

/* =========================
   Thermometer Class
   ========================= */
class Thermometer {
protected:
    float temperature;

public:
    void setTemperature(float t) {
        temperature = t;
    }

    float getTemperature() {
        return temperature;
    }
};

/* =========================
   CarDashboard Class
   (Multiple Inheritance)
   ========================= */
class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void displayDashboard() {
        cout << "---- Car Dashboard ----\n";
        cout << "Speed: " << speed << " km/h\n";
        cout << "Fuel Level: " << fuel << " liters\n";
        cout << "Temperature: " << temperature << " C\n";
    }
};

/* =========================
   Main Function
   ========================= */
int main() {
    CarDashboard car;

    car.setSpeed(80);
    car.setFuel(25.5);
    car.setTemperature(36.7);

    car.displayDashboard();

    return 0;
}
