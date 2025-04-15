#include <iostream>
using namespace std;

enum Oceny{
    niedostateczny =1,
    dopuszczajacy,
    dostateczny,
    dobry,
    bardzo_dobry,
    celujacy
};
class Przedmiot {
    public:
    string nauczciel;
    Oceny ocena;

    string ocenaa();
    void show();
};
string Przedmiot::ocenaa(){
    switch (ocena) {
        case niedostateczny:
            return "niedst" ;
            break;
        case dopuszczajacy:
            return "dop" ;
            break;
        case dostateczny:
            return "dst" ;
            break;
        case dobry:
            return "dbr" ;
            break;
        case bardzo_dobry:
            return "bdb" ;
            break;
        case celujacy:
            return "cel";
            break;
    }
    return "jajko";
    }

void Przedmiot::show() {
    cout<< "Nauczyciel: " << nauczciel << "\n Ocena: " << ocenaa() << endl;
}

int main() {
    Przedmiot matma;
    matma.nauczciel = " cwel";
    matma.ocena = dostateczny;
    matma.show();
    return 0;
}
