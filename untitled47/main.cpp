#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int tab[MAX_SIZE];
int n;

void czytaj_dane() {
    cout << "Podaj liczbe n: ";
    cin >> n;
    if (n > MAX_SIZE) {
        cout << "Za duza liczba n!";
        exit(1);
    }

    for (int i = 0; i < n; ++i) {
        tab[i] = rand() % 100;
    }
}

int minx() {
    int min = tab[0];
    for (int i = 1; i < n; ++i) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    return min;
}

int maxx() {
    int max = tab[0];
    for (int i = 1; i < n; ++i) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    return max;
}

void wyswietl_wynik() {
    cout << "Najmniejsza liczba: " << minx() << endl;
    cout << "Najwieksza liczba: " << maxx() << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(NULL)));
    czytaj_dane();
    wyswietl_wynik();
    return 0;
}
