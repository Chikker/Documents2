#include <iostream>
using namespace std;

class Portfel{
    int pieniadze;
public:

    Portfel();
    void zarobki(int);
    void wydatki(int);
    int zawartosc();
};

Portfel::Portfel() {
    pieniadze = 0;
}

void Portfel::zarobki(int z) {
    pieniadze +=z;
}

void Portfel::wydatki(int w) {
    pieniadze -=w;
}
int Portfel::zawartosc() {
    return pieniadze;
}


int main() {
    Portfel moj;
    moj.wydatki(67);
    cout<<moj.zawartosc();
    return 0;
}

