#include <iostream>

using namespace  std;

class Licz{
private:
    int bombawartosc;
public:
    Licz(int bombawartosc){
        this->bombawartosc = bombawartosc;
    }
    int Dodawanietako(int wojna){
        int sumowanie = wojna + bombawartosc;
        return sumowanie;
    }

    void wypisz(){
        cout<<"TWOJA WARTOSC WYNOSI: "<<bombawartosc;
    }
};





int main() {

    Licz lololol(89);
    lololol.wypisz();


    return 0;
}

