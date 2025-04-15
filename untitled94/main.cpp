#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void zapytajOLiczbe(string &binarna) {
    cout << "Podaj liczbe w systemie binarnym: ";
    cin >> binarna;
    for (char c : binarna) {
        if (c != '0' && c != '1') {
            cout << "Błędny format liczby. Dozwolone są tylko cyfry 0 i 1." << endl;
            exit(1);
        }
    }
}

int konwersjaNaDziesietna(const string &binarna) {
    int dlugosc = binarna.length();
    int dziesietna = 0;
    int licznik = 0;
    for (int i = dlugosc - 1; i >= 0; i--) {
        dziesietna += (binarna[i] - '0') * pow(2, licznik);
        licznik++;
    }
    return dziesietna;
}

void wyswietlLiczbe(int dziesietna) {
    cout << dziesietna << endl;
}

int main() {
    string binarna;
    zapytajOLiczbe(binarna);
    int dziesietna = konwersjaNaDziesietna(binarna);
    wyswietlLiczbe(dziesietna);
    return 0;
}
