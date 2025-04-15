#include <iostream>
using namespace std;

class pracownik {
public:
    static string zaklad_pracy;
    static const int pensja = 4500;
};
string pracownik::zaklad_pracy = "Zsp glogow";
int main() {
    cout << pracownik::zaklad_pracy;
    pracownik Kamil;
    Kamil.zaklad_pracy = "KGHM";
    pracownik Adrian;
    cout << "\nkamil: " << Kamil.zaklad_pracy << "\nAdrian: " << Adrian.zaklad_pracy;
    return 0;
}
