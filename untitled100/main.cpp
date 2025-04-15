#include <iostream>
using namespace std;
class Samochud {
    string marka = "!";
    string model = "!";
    int rok_produkcji = 0;
    int cena = 0;
    int numer_rejestracyjny = 0;
    int data_pierwszej_rejestracji = 0;
public:
    Samochud();
    Samochud(string, string, int, int, int, int);
    ~Samochud();
    void wyswietl();
};

Samochud::Samochud(string m, string mo, int r, int c, int nr, int da) {
    marka = m;
    model = mo;
    rok_produkcji = r;
    cena = c;
    numer_rejestracyjny = nr;
    data_pierwszej_rejestracji = da;
}

Samochud::Samochud() {

}

void Samochud::wyswietl() {
    cout << "\n Marka: " << marka << "\n Model: " << model << "\n Rok produkcji: " << rok_produkcji << "\n Cena: " << cena << "\n Numer rejestracyjn: " << numer_rejestracyjny << "\n Data pierwszej rejestracji: " << data_pierwszej_rejestracji << "\n--------------";
}

Samochud::~Samochud() {
    cout<< "dane usuniete";
}

int main() {
    Samochud samochud12 {"BMW", "E35", 1999, 35000, 892482, 2005};
    samochud12.wyswietl();
    Samochud samochud13 {};
    samochud13.wyswietl();


    return 0;
}
