#include <iostream>
using namespace std;

class Ksiazka{
public:
    string tytul, autor, wydawca;
    Ksiazka(string tytul,string autor, string wydawca){
        this -> tytul  = tytul;
        this -> autor = autor;
        this -> wydawca = wydawca;

    }
};

void wypisz(Ksiazka ob){
    cout << "Tytul: " << ob.tytul << "\nAutor:" << ob.autor << "\nWydawca: " << ob.wydawca <<"\n-------------------------------\n" ;
}

int main() {
    Ksiazka MeinKampf{"Mein Kampf", "Hitler Adolf", "Niemcy"};
    wypisz(MeinKampf);
    return 0;
}
