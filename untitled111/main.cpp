#include <iostream>
using namespace std;

class Pojazd {
    string marka;
    int rok_produkcji;
    double przebieg;
    bool czy_sprawny;

    static int identyfikator;
    static int licznikObiektow;

public:
    Pojazd() : marka("Nieznana"), rok_produkcji(2000), przebieg(0.0), czy_sprawny(true) {
        ++licznikObiektow;
    }

    Pojazd(string marka, int rok, double przebieg, bool sprawny)
        : marka(marka), rok_produkcji(rok), przebieg(przebieg), czy_sprawny(sprawny) {
        ++licznikObiektow;
    }

    Pojazd(const Pojazd& p)
        : marka(p.marka), rok_produkcji(p.rok_produkcji), przebieg(p.przebieg), czy_sprawny(p.czy_sprawny) {
        ++licznikObiektow;
    }

    ~Pojazd() {
        cout << "Pojazd wjechał w ścianę i się rozbił: " << marka << endl;
        --licznikObiektow;
    }

    void wyswietlinformacje() const {
        cout << "Marka: " << marka << endl;
        cout << "Rok produkcji: " << rok_produkcji << endl;
        cout << "Przebieg: " << przebieg << endl;
        cout << "Czy sprawny: " << (czy_sprawny ? "Tak" : "Nie") << endl;
    }

    void przebieg_service() {
        przebieg += 1000;
        if (czy_sprawny) {
            cout << "Pojazd sprawny po serwisie przebiegu." << endl;
        } else {
            cout << "Pojazd nie jest sprawny!" << endl;
        }
    }

    void napraw() {
        czy_sprawny = true;
        cout << "Pojazd został naprawiony." << endl;
    }

    static int liczba_pojazdow() {
        return licznikObiektow;
    }
};

int Pojazd::identyfikator = 0;
int Pojazd::licznikObiektow = 0;

int main() {
    Pojazd p1;
    p1.wyswietlinformacje();
    p1.przebieg_service();
    p1.napraw();

    Pojazd p2("Toyota", 2015, 120000.5, false);
    p2.wyswietlinformacje();
    p2.przebieg_service();
    p2.napraw();

    Pojazd p3(p2);
    p3.wyswietlinformacje();
    p3.przebieg_service();

    cout << "Liczba pojazdów: " << Pojazd::liczba_pojazdow() << endl;

    return 0;
}