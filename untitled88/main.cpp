#include <iostream>
using namespace std;

struct Data{
    int dd,mm,rr;
};
class Pracownik{
public:
    int id= -1;
    string imie;
    string Nazwisko;
    Pracownik();
    Pracownik(int, string);

   Data datazatrudnienia;


};

Pracownik::Pracownik() {
    imie = "Roman";
}

Pracownik::Pracownik(int id, string Nazwisko = "Nowak") {
    this ->Nazwisko = Nazwisko;
    this ->id = id;
}

int main() {
    Pracownik osoba1 (1);
    Pracownik osoba2;
    Pracownik osoba3();

    return 0;
}

