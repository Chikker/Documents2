#include <iostream>
using namespace std;


class moc{
public:
    int km,kw;

    void to_km();
    void to_kw();
    void show();
};


void moc::to_kw() {
    kw=km*0.74;

}

void moc::to_km() {
    km=kw*1.36;
}

void moc::show() {
    cout<<"kw = "<<kw<<endl;
    cout<<"km = "<<km<<endl;
}


int main() {
    moc bmw;
    bmw.kw=100;
    bmw.to_km();
    bmw.show();
    cout<<endl;
    bmw.km=100;
    bmw.to_kw();
    bmw.show();
}


