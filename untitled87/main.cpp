#include <iostream>

using namespace  std;


class Samochudd{
    string marka, model, silnik;
public:
    Samochudd(string);
    Samochudd(string,string);
    Samochudd(string,string,string);
    Samochudd(int,string,string);
    void show(){
        cout<<" \nmarka: "+marka+"\nmodel: "+model+"\nsilnik: "+silnik + "\n";
    }
};

Samochudd::Samochudd(string ilerazybylesruchany) {
    marka = ilerazybylesruchany;
}

Samochudd::Samochudd(string ilerazyopierdalalespento, string niggercaarnuchu) {
    marka = ilerazyopierdalalespento;
    model = niggercaarnuchu;
}

Samochudd::Samochudd(string ihujciwdupe, string nienIENNIENIENIENIENIE, string wpizde) {
    marka = ihujciwdupe;
    model = nienIENNIENIENIENIENIE;
    silnik = wpizde;
}

Samochudd::Samochudd(int weloeloeloelo, string iiloilo , string nIGAAA) {
    marka = weloeloeloelo;
    model = iiloilo;
    silnik = nIGAAA;
}

int main() {
    Samochudd gf("35");
    Samochudd ds("243","nie");
    Samochudd sgh(13,"sd","dd");
    Samochudd sgg("sgg","sd","dd");
    gf.show();
    ds.show();
    sgh.show();
    sgg.show();
    return 0;
}

