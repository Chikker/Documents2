#include <iostream>
using namespace std;
class Uczen {
public:
    string nazwisko = "!";
    string imie = "!";
    int klasa = 0;
    int grupa = 0;
    int nr_dziennik = 0;
    void wyswietlDane();
    Uczen();
    Uczen(string, string,int, int, int);
};

Uczen::Uczen(string nazw, string im, int kls, int gr, int nr) {
 nazwisko = nazw;
 imie = im;
 klasa = kls;
 grupa = gr;
 nr_dziennik = nr;
}

void Uczen::wyswietlDane() {
    cout << "\n Imie: " << imie << "\n Nazwisko: " << nazwisko << "\n Klasa: " << klasa << "\n Grupa: " << grupa << "\n Numer w dzienniku: " << nr_dziennik << "\n -----------------";
}

Uczen::Uczen() {

}


int main() {
    Uczen uczen {"jaja","hej", 3, 2, 30};
    uczen.wyswietlDane();
    Uczen uczen1 {};
    uczen1.wyswietlDane();
    return 0;
}
