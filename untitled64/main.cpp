
#include <iostream>

using namespace std;

class Liczba {
public:
    virtual void wczytaj() = 0;
    virtual void wypisz() const = 0;
    virtual ~Liczba() = default;
};

class nint : public Liczba {
public:
    int wartosc;

    void wczytaj() override {
        cout << "Podaj wartosc typu int: ";
        cin >> wartosc;
    }

    void wypisz() const override {
        cout << "Wartosc typu int: " << wartosc << endl;
    }
};

class ndouble : public Liczba {
public:
    double wartosc;

    void wczytaj() override {
        cout << "Podaj wartosc typu double: ";
        cin >> wartosc;
    }

    void wypisz() const override {
        cout << "Wartosc typu double: " << wartosc << endl;
    }
};

int main() {
    nint liczbaInt;
    ndouble liczbaDouble;

    liczbaInt.wczytaj();
    liczbaInt.wypisz();

    liczbaDouble.wczytaj();
    liczbaDouble.wypisz();

    return 0;
}
