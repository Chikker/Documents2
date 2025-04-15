#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file ("/Users/dominik.walenczak/Desktop/dane.txt", ios::in | ios::binary);
    fstream file2 ("/Users/dominik.walenczak/Desktop/wynik.txt", ios::in | ios::binary);
    string wynik[4];
    int wyink[4];
    int wykk = 0;

    for (int i = 0; i < 4; i++) {
        getline(file, wynik[i]);
        wyink[i] = stoi(wynik[i]);
        wykk += wyink[i];
    }
    int srednia = wykk/4;

    file2 << "Suma: " << wykk << endl << "srednia: " <<setprecision(2) << fixed << srednia << endl;
    file.close();
    file2.close();
    return 0;
}