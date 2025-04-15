#include <iostream>

using namespace std;

class Statyczna {
public:
    int I;
    static int Liczba;

    void Zwieksz() {
        Liczba++;
    }

    explicit Statyczna(int val = 0) : I(val) {
        Zwieksz();
    }
};

int Statyczna::Liczba = 0;

int main() {
    Statyczna lol;
    lol.Zwieksz();
    cout << "Liczba: " << Statyczna::Liczba << endl;
    lol.Zwieksz();
    cout << "Liczba: " << Statyczna::Liczba << endl;
    lol.Zwieksz();
    cout << "Liczba: " << Statyczna::Liczba << endl;
    lol.Zwieksz();
    cout << "Liczba: " << Statyczna::Liczba << endl;
    lol.Zwieksz();
    cout << "Liczba: " << Statyczna::Liczba << endl;
    lol.Zwieksz();
    cout << "Liczba: " << Statyczna::Liczba << endl;
    lol.Zwieksz();
    cout << "Liczba: " << Statyczna::Liczba << endl;
    lol.Zwieksz();
    cout << "Liczba: " << Statyczna::Liczba << endl;

    return 0;
}