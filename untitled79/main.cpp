#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void wypiszfibonacionga(int k) {
    for (int i = 1; i <= k; ++i) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
}
bool czy_posortowane(int tab[0], int n){
    int i = 1;
    int j = 1;
    while (i != 0){
        if(tab[i-1] < tab[i]){
            if(j==n){
                return true;
            }
            j++;
        }
        else {
            return false;
        }
        i++;
    }
}
int main() {
    int terms;
    cout << "Podaj ile liczb wypisac fibonacionga: ";
    cin >> terms;
    wypiszfibonacionga(terms);
    int tab[] = {1,2,3,4,5,6};
    cout << "\n" <<czy_posortowane(tab,5);
    return 0;
}
