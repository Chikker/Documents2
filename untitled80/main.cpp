#include <iostream>
using namespace std;


struct adres
        {
    string ulica;
    int nrDomu;
    string miasto;
};

class Osoba
        {
public:
    string imie,nazwisko;
    adres adress;
    void ustaw(string,string,adres);


};

void Osoba::ustaw(string imie, string nazwisko, adres adress)
{
    this->imie = imie;

    this->nazwisko = nazwisko;

    this->adress = adress;


}


void show(Osoba *a){
    cout<<"Twoje imie: " + a->imie + "\nTwoje nazwisko: " +a->nazwisko + "\nTwoja Ulica: "+a->adress.ulica+"\nTwoj Nr Domu: "<< a->adress.nrDomu<<"\nTwoje miasto: "+a->adress.miasto;
}

int main() {

    Osoba Marektosiurek;
    Marektosiurek.ustaw("CHUJEC","TYWONIUK",{"BOMBOWA",4040,"HIROSZIMA"});
    show(&Marektosiurek);
    return 0;
}