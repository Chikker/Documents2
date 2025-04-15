#include <iostream>
#include <string>

using namespace std;

int policzBledy(const string &tekstNauczyciela, const string &tekstUcznia) {
    int bledy = 0;
    int dlugoscN = tekstNauczyciela.length();
    int dlugoscU = tekstUcznia.length();

    for (int i = 0; i < (dlugoscN < dlugoscU ? dlugoscN : dlugoscU); ++i) {
        if (tekstNauczyciela[i] != tekstUcznia[i]) {
            bledy++;
        }
    }

    return bledy + (dlugoscN > dlugoscU ? dlugoscN - dlugoscU : dlugoscU - dlugoscN);
}

int main() {
    string tekstNauczyciela, tekstUcznia;
    cout << "Podaj tekst nauczyciela: ";
    getline(cin, tekstNauczyciela);
    cout << "Podaj tekst ucznia: ";
    getline(cin, tekstUcznia);
    int liczbaBledow = policzBledy(tekstNauczyciela, tekstUcznia);
    cout << "Liczba błędów: " << liczbaBledow << endl;
    return 0;
}
