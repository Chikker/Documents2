#include <iostream>

using namespace std;

class ubranie{
public:
    string material;
    string kolor;
};

class spodnie:public ubranie{
    float dlugosc;
    float w_pasie;
};
class koszula:public ubranie{
    float dlugosc;
    float w_klacie;
};
class czapka:public ubranie{
    float obwod;
};

int main() {

    return 0;
}
