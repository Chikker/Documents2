
#include <iostream>

using namespace std;

class Mebel{

public:
    string material;
    string kolor;
};

class Krzeslo: public  Mebel{
public:
    int ilosc_nog;

    Krzeslo(string,string,int );
};
class Stol:public Mebel{
public:
    int ilosc_nog;
    int powierzchnia;
    Stol(string, string,int,int );
};
class Szafa:public Mebel{
public:
    int ilosc_drzwi;
    int powierzchnia;
    Szafa(string,string,int,int );
};

Szafa::Szafa(string m, string k, int d, int p) {
    m = material;
    k = kolor;
    d= ilosc_drzwi;
    p = powierzchnia;
}
Stol::Stol(string m, string k, int n, int p) {
    m = material;
    k = kolor;
    n= ilosc_nog;
    p = powierzchnia;
}
Krzeslo::Krzeslo(string m,string k,int n){
    m = material;
    k = kolor;
    n = ilosc_nog;
}


int main() {

    Stol stol1("drewno","czarny",1,3);
    Krzeslo krzeslo1("drewno","czarny",4);
    Szafa Szafa1("drewno","czarny",1,3);

    return 0;
}
