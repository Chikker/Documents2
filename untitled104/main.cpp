#include <iostream>
#include "cmath"
using namespace std;
class Figura {
public:
    virtual double Obowod() = 0;
};

class Okrag: public Figura{
    int r= 5;
    double Obowod(){
        return 2*r*M_PI;
    }

};

class kwadrat: public Figura{
    int a = 4;
    double Obowod(){
        return 4*a;
    }

};

class trojkat: public Figura{
    int a = 3;
    int b = 5;
    int c = 4;
    double Obowod(){
        return a+b+c;
    }

};
class prostokat: public Figura{
    int a =3;
    int b = 5;
    double Obowod(){
        return 2*a + 2*b;
    }

};
int main() {
 Figura *wsk;
 Okrag kw;
  wsk = &kw;
  cout << wsk ->Obowod();
    return 0;
}

