#include <iostream>
using namespace std;

class Zwierze {
public:
    string gatunek;
    string imie;

    Zwierze() {}
};

class Zmija {
public:
    Zwierze a;
    int dlugosc;

    Zmija() {}
};

class Rys {
public:
    Zwierze a;
    int dlugosc;
    int wysokosc;

    Rys() {}
};

class Orzel {
public:
    Zwierze a;
    int dlugosc;
    int rozpietosc;

    Orzel() {}
};

int main() {
    cout << "Witaj w królestwie zwierząt!" << endl;


    Zmija mojaZmija;
    mojaZmija.dlugosc = 2;
    mojaZmija.a.gatunek = "Zielona zmija";
    mojaZmija.a.imie = "Smyk";

    Rys mojRys;
    mojRys.dlugosc = 1.5;
    mojRys.wysokosc = 0.9;
    mojRys.a.gatunek = "Lynx lynx";
    mojRys.a.imie = "Leo";

    Orzel mojOrzel;
    mojOrzel.dlugosc = 0.8;
    mojOrzel.rozpietosc = 2.2;
    mojOrzel.a.gatunek = "Aquila chrysaetos";
    mojOrzel.a.imie = "Eagle Eye";

    cout << "\nInformacje o zmii:" << endl;
    cout << "Gatunek: " << mojaZmija.a.gatunek << ", Imię: "
         << mojaZmija.a.imie << ", Długość: "
         << mojaZmija.dlugosc << " m" <<
         endl;

    cout<< "\nInformacje o rysiu:" <<
        endl ;
    cout<< "\nGatunek: "<<mojRys.a.gatunek<<", Imię:"
        <<" "<<mojRys.a.imie<<", Długość:"
        <<" "<<mojRys.dlugosc<<" m,"
        <<" WYSOKOŚĆ:"<<mojRys.wysokosc<<" m"<<endl;


    cout<<"\nInformacje o orle:"<<"\nGATUNEK:"<<mojOrzel.a.gatunek<<", IMIĘ:"
        <<mojOrzel .a.imie<<" ,DŁUGOŚĆ :"
        <<mojOrzel.dlugosc<<" M, ROZPIĘTOŚĆ :"
        <<mojOrzel.rozpietosc<<" M\n\n\n";


    return 0;
}
