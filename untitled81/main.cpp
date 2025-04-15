#include <iostream>
using namespace std;

struct Samochod{
    string marka;
    int rocznik, przebieg, moc;

    Samochod(string, int, int, int);
};

Samochod::Samochod(string marka, int rocznik, int przebieg, int moc){
    this -> marka = marka;
    this -> rocznik = rocznik;
    this -> przebieg = przebieg;
    this -> moc = moc;
}

int main() {
    Samochod bmw ("Bmw", 2000,670000,300);
    return 0;
}
