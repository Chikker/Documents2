#include <iostream>

using namespace std;

struct wyswietlacz {
    string rodzaj = "IPS";
    int roz_x, roz_y;

};

class Smartphone {
public:
    string nazwa;
    wyswietlacz wysw;
    int poj_baterii;
    string cpu = "Mediap3r2ij 8 core";
    int ram = 4;
    int pamiec = 128;

    void wyswietl(){
        cout << " Nazwa: " << nazwa << "\n Wyswietlacz: " << wysw.rodzaj << " " << wysw.roz_x << " X " << wysw.roz_y << "\n Pojemnosc baterii: " << poj_baterii << "\n Procesor: " << cpu <<
        "\n Pamiec ram: " << ram << "\n Pamiec wewnetrzna: " << pamiec<< "\n-----------------------\n";
    }

    Smartphone(){
        cout << "\n UTWORZONO OBIEKT \n\n";
    }

    Smartphone(string nazwa, wyswietlacz wysw, int bateria, string procesor ="HItleroto2e13rn", int ram =4, int pamiec = 128 ){
        this -> nazwa = nazwa;
        this -> wysw = wysw;
        poj_baterii = bateria;
        cpu = procesor;
        this -> ram = ram;
        this -> pamiec = pamiec;
    }
};

int main() {
    Smartphone hitleroto123("Hitlero 9 pro", {"IPS",2400,1080}, 5000 );
    hitleroto123.nazwa = "Hitlero 8 smart";
    hitleroto123.wysw.roz_x = 2408;
    hitleroto123.wysw.roz_y = 1080;
    hitleroto123.poj_baterii = 5000;
    hitleroto123.cpu = "Fiutoloko 8 core";
    hitleroto123.wyswietl();
    return 0;
}
