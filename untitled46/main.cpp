#include <iostream>
using namespace std;
bool czyPierwsza(int n){
    if(n==1) return false;
    int i=2;
    while(i*i<=n){
        if (n%i==0) return false;
        i++;
    }
    return true;
}
int main() {
    int liczba;
    cout << "podaj liczbe: ";
    cin >> liczba;
    if(czyPierwsza(liczba)) cout << "\n" << liczba << " jest liczba pierwsza";
    else cout << "\n" << liczba << " NIE jest liczba pierwsza";
    return 0;
}