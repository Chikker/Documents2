#include <iostream>
#include <string>
using namespace std;
void choinka(int h) {
    string zn = "A";
    string sp(h, ' ');
    cout << "" << sp << "*" << endl;
    for (int i = 0; i < h; i++) {
        sp = sp.substr(0, sp.length() - 1);
        if (i != h / 2) {
            zn += "AA";
        } else {
            sp += "   ";
            zn = zn.substr(0, zn.length() - 4);
        }
        cout << sp << zn << std::endl;
    }
    for (int i = 0; i < 2; i++) {
        if (h % 2 == 0) {
            cout << string(h - 1, ' ') << "***" << endl;
        } else {
            cout << string(h - 2, ' ') << "***" << endl;
        }
    }
}

int main() {
    choinka(15);
    return 0;
}

