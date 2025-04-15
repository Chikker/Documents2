#include <iostream>
using namespace std;

class Ksiazka{
string tytul, autor, wydawca;
public:
    void setter (string tytul, string autor, string wyd){
        this->tytul = tytul;
        this->autor = autor;
        wydawca = wyd;
    }

    string show(){
        return "Tytul: " + tytul + "\nAutor" + autor + "\nWydawca" + wydawca + "\n";
    }
};
int main() {
    Ksiazka kotek;
    kotek.setter("Kotek","J.cwel","Soda");
    cout << kotek.show();
    return 0;
}
