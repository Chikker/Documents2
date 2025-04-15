#include <iostream>
#include <vector>

using namespace std;

class Zakupy {
    vector<string> produkty;
    vector<int> ilosci;
public:
    void dodajProdukt(string, int);
    void usunProdukt(int);
    void pokazListe();
    void wyczyscListe();
    Zakupy();
    ~Zakupy();
};

void Zakupy::dodajProdukt(string produkt, int ilosc) {
    produkty.insert(cbegin(produkty) + produkty.size(), produkt);
    ilosci.insert(cbegin(ilosci) + ilosci.size(), ilosc);
}

Zakupy::~Zakupy() {}

void Zakupy::wyczyscListe() {
    produkty.clear();
    ilosci.clear();
}

void Zakupy::usunProdukt(int indeks) {
    produkty.erase(cbegin(produkty) + indeks);
    ilosci.erase(cbegin(ilosci) + indeks);
}

void Zakupy::pokazListe() {
    for(int i = 0; i < produkty.size(); i++) {
        cout << produkty[i] << " " << ilosci[i];
        cout << endl;
    }
}

Zakupy::Zakupy() {}

int main() {
    Zakupy listaZakupow;
    listaZakupow.dodajProdukt("kawa", 7);
    listaZakupow.dodajProdukt("sraczka", 2);
    listaZakupow.pokazListe();
    listaZakupow.usunProdukt(1);
    listaZakupow.pokazListe();
    return 0;
}
