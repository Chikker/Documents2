#include <iostream>
using namespace std;
class Osoba{
    int pesel;
public:
    string imie,nazwisko;
    Osoba(int,string,string);
};

Osoba::Osoba(int p, string im, string nazw) {
    pesel = p;
    imie = im;
    nazwisko = nazw;
}

int main() {
    Osoba Gowno {12,"huj","sraka"};
    return 0;
}
