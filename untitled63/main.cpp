#include <iostream>
using namespace std;

class Pracownik{
public:
    string imie,nazwisko,stanowisko;
    string ZwrocDane() const;
    string ZwrocDane(string&,string&,string&);
};
class Nauczyciel:public Pracownik{
public:
    string przedmiot;
    string ZwrocDane();
};

string Nauczyciel::ZwrocDane() {
    return Pracownik::ZwrocDane()+ " "+ przedmiot;
}

string Pracownik::ZwrocDane() const{
    return imie + " " + nazwisko;
}

string Pracownik::ZwrocDane(string &imie, string &nazwisko , string &stanowisko) {
    this -> imie=imie;
    this -> nazwisko = nazwisko;
    this -> stanowisko = stanowisko;
}

int main() {
    Pracownik michal;
    string imie="michal",nazwisko = "tywoniuk",stanowisko = "programista";
    michal.ZwrocDane(imie,nazwisko,stanowisko);
    Nauczyciel kamil;
    kamil.imie = ("kamil");
    kamil.nazwisko = ("Sobczak");
    kamil.stanowisko = ("Nauczyciel");
    kamil.przedmiot = ("programowanie");
    cout<<kamil.ZwrocDane();
    return 0;
}
