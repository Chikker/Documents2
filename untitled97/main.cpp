#include <iostream>
using namespace std;
class Napis{
    string napis;
public:

    Napis();
    Napis(Napis &);
    Napis(string);
    ~Napis();
    void dopisz(Napis &);
    void dopisz(string);
    int dlug();
    void show();
};

Napis::Napis() {

}

Napis::Napis(Napis &a) {
    napis = a.napis;
}

Napis::Napis(string nap) {
    napis = nap;
}

void Napis::dopisz(Napis &a) {
    napis += a.napis;
}

void Napis::dopisz(string a) {
    napis += a;
}

int Napis::dlug() {
    return napis.length();
}
Napis::~Napis(){

}

void Napis::show() {
    cout << napis;
};
int main() {
    Napis napis1("hej nazywam sie michal");
    Napis napis2(napis1);
    napis1.dopisz(napis2);
    napis1.dopisz(" nigdy sie tak nie nazywalem");
    napis2.dlug();
    napis1.show();
    return 0;
}
