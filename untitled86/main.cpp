#include <iostream>
using namespace std;
class samochud_osobowy{
    string rocznik, marka, model;
public:
    samochud_osobowy(string,string,string);
    void wyswietl();
};

samochud_osobowy::samochud_osobowy(string rocznik, string marka, string model) {
    this -> rocznik = rocznik;
    this -> marka = marka;
    this -> model = model;
}

void samochud_osobowy::wyswietl() {
    cout<< "\n Rocznik: " << rocznik << "\n Marka: " << marka << "\n Model: " << model;
}

int main() {
    auto *bmw = new samochud_osobowy("1990","BWM","E35");
    samochud_osobowy Fiat ("1974","Fiat","Punto");
    delete bmw;
    cout<< endl;

    return 0;
}
