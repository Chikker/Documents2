#include <iostream>
using namespace std;

class wskaznik{
private:
    int *wsk;
public:
    void utworz(int n);
    int zwroc();
    void zwolnij();
    void kopiuj(wskaznik);
};

void wskaznik::utworz(int n) {
    int tab[n];
    wsk = tab;
}

int wskaznik::zwroc() {
    return *wsk;
}

void wskaznik::zwolnij() {
    wsk = nullptr;
}

void wskaznik::kopiuj(wskaznik ref) {
    ref.wsk = wsk;
}


int main() {
    wskaznik jajko;
    jajko.utworz(12);
    cout << jajko.zwroc();
    jajko.zwolnij();
    jajko.kopiuj(jajko);
    return 0;
}
