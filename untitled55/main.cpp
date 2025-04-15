#include <iostream>

using namespace std;

class FunkcjaLiniowa {
public:

    double a;
    double b;


    FunkcjaLiniowa(double wspA, double wspB) : a(wspA), b(wspB) {}


    double oblicz(double x) {
        return (a * x) + b;
    }
};

int main() {

    FunkcjaLiniowa funkcja(2.0, 3.0);
    double x = 9.0;
    cout << "Wartość funkcji dla x = " << x << ": " << funkcja.oblicz(x) << endl;

    return 0;
}
