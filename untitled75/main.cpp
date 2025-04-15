#include <iostream>
using namespace std;

class Portfel{
int pieniadze;


public:
    void inicjuj();
    void zarobki(int zarobek);
    void wydatki ( int wydatek);
    void pokaz ();

};

void Portfel::inicjuj() {
    pieniadze = 0;
};
void Portfel::zarobki(int zarobek) {
    pieniadze = pieniadze + zarobek;
}
void Portfel::wydatki(int wydatek) {
    pieniadze = pieniadze - wydatek;
}
void Portfel::pokaz() {
    cout << pieniadze << "\n";
}
int main() {
    Portfel cwel;
    cwel.inicjuj();
    cwel.pokaz();
    cwel.zarobki(1000);
    cwel.pokaz();
    cwel.wydatki(420);
    cwel.pokaz();

    return 0;
}
