#include <iostream>
using namespace std;

class stala_figura{
protected:
    double pole,obwod;
    string rodzaj;
public:
    stala_figura(double,double,string);
    double pol();
    double obw();
    void rodz();
};

stala_figura::stala_figura(double p, double o, string r) {
    pole=p;
    obwod=o;
    rodzaj=r;
}

double stala_figura::pol() {
    return pole;
}

double stala_figura::obw() {
    return obwod;
}

void stala_figura::rodz() {
    cout<<rodzaj<<endl;
}

class kwadrat: public stala_figura{
public:
    int bok;
    kwadrat(double , double, string , int );
};

kwadrat::kwadrat(double p, double o, string r, int b) : stala_figura(p, o, r) {
    bok=b;
}

class trojkat: public stala_figura{
public:
    int pod,wys;
    trojkat(double , double, string , int ,int);
};

trojkat::trojkat(double p, double o, string r, int po,int w): stala_figura(p,o,r) {
    pod=po;
    wys=w;
}



int main() {
    cout << "Hello, World!" << endl;
    return 0;
}

