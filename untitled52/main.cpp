#include <iostream>
using namespace std;

void algrotym () {
    string a;
    cin >> a;
    int i = 0;
    string dd;
    while (i < a.length()) {
    if (i < a.length()) {
        if (a[i] > 110) {
            dd = a[i] - 13;
            cout << dd;
        }
        else {
            dd = a[i] +13;
            cout << dd;
        }
    }
        else { cout << dd; }
        i++;
    }

}
int main() {
algrotym();
    return 0;
}
