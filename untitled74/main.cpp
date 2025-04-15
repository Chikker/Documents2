#include <iostream>
using namespace std;
class pracownik{
public:
    static string s_szkola;
    static string s_stanowisko;
    string imie,nazwisko;

    void wyswietlDane(){
        cout << "\nSzkola: " << s_szkola << "\nStanowisko: " << s_stanowisko << "\nImie: " << imie << "\nNazwisko: " << nazwisko;
    };

};
string pracownik::s_szkola = "Zsp glogow";
string pracownik::s_stanowisko = "sranie";
int main() {
    pracownik pierwszy;
    pierwszy.imie = "kupa";
    pierwszy.nazwisko = "Cweloniuk";
    pierwszy.wyswietlDane();
    cout << "\n----------------------";
    pracownik drugi;
    drugi.imie = "Rick";
    drugi.nazwisko = "Sanchez";
    drugi.wyswietlDane();
    return 0;
}
