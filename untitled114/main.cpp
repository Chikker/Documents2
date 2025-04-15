#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class PlikBazowy {
public:
    virtual void pokaz() const = 0;
    virtual void zapisz(const string& gdzie) const = 0;
    virtual ~PlikBazowy() {}
};

class PlikTxt : public PlikBazowy {
    string linia;
public:
    PlikTxt(string l) : linia(l) {}
    void pokaz() const override {
        cout << "Plik TXT => " << linia << "\n";
    }
    void zapisz(const string& gdzie) const override {
        ofstream f(gdzie.c_str());
        if (!f) {
            cerr << "Błąd: Nie można zapisać do pliku " << gdzie << "\n";
            return;
        }
        f << "Plik TXT => " << linia << "\n";
    }
};

class PlikImg : public PlikBazowy {
    string img;
    int w, h;
public:
    PlikImg(string n, int szer, int wys) : img(n), w(szer), h(wys) {}
    void pokaz() const override {
        cout << "Plik IMG => " << img << " | " << w << "x" << h << "\n";
    }
    void zapisz(const string& gdzie) const override {
        ofstream f(gdzie.c_str());
        if (!f) {
            cerr << "Błąd: Nie można zapisać do pliku " << gdzie << "\n";
            return;
        }
        f << "Plik IMG => " << img << " | " << w << "x" << h << "\n";
    }
};

class PlikAudio : public PlikBazowy {
    string utw;
    double dl;
public:
    PlikAudio(string u, double d) : utw(u), dl(d) {}
    void pokaz() const override {
        cout << "Plik AUDIO => " << utw << " | " << dl << "s\n";
    }
    void zapisz(const string& gdzie) const override {
        ofstream f(gdzie.c_str());
        if (!f) {
            cerr << "Błąd: Nie można zapisać do pliku " << gdzie << "\n";
            return;
        }
        f << "Plik AUDIO => " << utw << " | " << dl << "s\n";
    }
};

int main() {

    PlikBazowy* pliki[3];


    pliki[0] = new PlikTxt("Kod działa!");
    pliki[1] = new PlikImg("grafika.png", 1024, 768);
    pliki[2] = new PlikAudio("dzwiek.wav", 300.0);


    for (int i = 0; i < 3; i++) {
        pliki[i]->pokaz();
    }


    for (int i = 0; i < 3; i++) {
        string filename = "plik_" + to_string(i) + ".txt";
        pliki[i]->zapisz(filename);
    }

    for (int i = 0; i < 3; i++) {
        delete pliki[i];
    }

    return 0;
}