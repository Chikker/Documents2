#include <iostream>
#include <cmath>

 using namespace std;

class Figure {
    virtual double area() = 0;
    virtual void print() = 0;
};

class Rectangle : public Figure {
    int width, height;
    int wynik = width * height;

    double area() override {
        return wynik ;
    };
    void print() override {
        cout << "szerokosc to " << width <<  " a wysokosc to " << height << " area : " << wynik << endl;
    }
};

class Circle : public Figure {
  double radius;
    int wynik = M_PI * radius * radius;

    double area() override {
        return wynik;
    }
    void print() override {
        cout << "promien to " << radius << "area to " << wynik << endl;
    }

};
int main() {

    return 0;
}