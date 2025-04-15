#include <iostream>
using namespace std;

class Prostopadloscian {
public:
    int a, b, c;
    void wpisz(int, int, int);
    int pole();
    int objetosc();
    void show();
};

void Prostopadloscian::wpisz(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

int Prostopadloscian::pole() {
    return 2 * (a * b + a * c + b * c);
}

int Prostopadloscian::objetosc() {
    return a * b * c;
}

void Prostopadloscian::show() {
    cout << "objetosc = " << objetosc() << endl;
    cout << "pole = " << pole() << endl;
}

int main() {
    Prostopadloscian p;
    p.wpisz(3, 4, 5);
    p.show();
}
