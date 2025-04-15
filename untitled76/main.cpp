#include <iostream>
using namespace std;

class funkcja_kw{
public:
    int a,b,c;

    double wartosc (int x);
    bool zero (int x);
};

double funkcja_kw::wartosc(int x) {
    return a*x*x+b*x+c;
}

bool funkcja_kw::zero(int x) {
    if (b*b -4*a*c >= 0) {
        return true;
    }
    else
        return false;
}


int main() {
    funkcja_kw kupsko;
    kupsko.a = 2;
    kupsko.b = 5;
    kupsko.c = 3;
    cout << kupsko.wartosc(2) << "\n";
    cout << kupsko.zero(2);

    return 0;
}
