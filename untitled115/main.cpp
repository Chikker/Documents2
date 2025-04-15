#include <iostream>
using namespace std;

class Kalkulator {
public:
    int dodaj(int a, int b) {
        return a + b;
    }

    double dodaj(double a, double b) {
        return a + b;
    }

    int dodaj(int a, int b, int c) {
        return a + b + c;
    }
};


int main() {
    Kalkulator kalkulator;

    int wynik1 = kalkulator.dodaj(9, 5);
    double wynik2 = kalkulator.dodaj(7.8, 9.3);
    int wynik3 = kalkulator.dodaj(2, 8, 12);

    cout << "Wynik dodawania (int, int): " << wynik1 << endl;
    cout << "Wynik dodawania (double, double): " << wynik2 << endl;
    cout << "Wynik dodawania (int, int, int): " << wynik3 << endl;

    return 0;
}

