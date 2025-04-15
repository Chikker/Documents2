#include <iostream>
#include "cmath"
using namespace std;
float trajkapatagarajska(int a, int b, int c) {
    if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
        cout << "Liczby stanowa trajke patagarajska" << endl;
    }
    else if (pow(a, 2) == pow(c, 2) + pow(b, 2)) {
        cout << "Liczby stanowa trajke patagarajska" << endl;
    }
    else if (pow(b, 2) == pow(a, 2) + pow(c, 2)) {
        cout << "Liczby stanowa trajke patagarajska" << endl;
    }
    else
        cout  << " to nie jest pintagorajska liczba";
}
int main() {
    trajkapatagarajska(4,5,3);
    return 0;
}
