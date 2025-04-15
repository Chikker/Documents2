#include <iostream>
#include "cmath"
using namespace std;

string nienawidze (int i) {
    if (i ==1)
        return "*";
    else
        return "*" + nienawidze(i-1);
}

int main() {
 cout << nienawidze(5) << endl;
    return 0;
}
