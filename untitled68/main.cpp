#include <iostream>
#include "vector"
using namespace std;
class Tablica{
public:
    int n;
    int *tab = {};

    int liniowe(int x);
    int binarne(int x);
    int wartownik(int x);
    Tablica(int tab[], int n){
        this -> tab = tab;
        this -> n = n;
    }

};
int * sortowanie(int tab[], int n){
    int x;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(tab[i]>tab[j]){
                x = tab[i];
                tab[i] = tab[j];
                tab[j] = x;
            }
        }
    }
    return tab;
}
int Tablica::liniowe(int x){
    for(int i=0;i<n;i++){
        if(x == tab[i]){
            cout<<"liczba znajduje sie pod ineksem "<<i<<endl;
            return i;
        }
    }
    cout<<"liczby nie ma w tablicy"<<endl;
    return n;
}

int Tablica::binarne(int x) {
    int t[n];
    for(int i=0;i<=n;i++){
        t[i]=tab[i];
    }
    int w=0;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(t[j+1]<t[j]){
                w=t[j+1];
                t[j+1]=t[j];
                t[j]=w;
            }

        }
    }
    for(int i=0;i<=n;i++){
        cout<<t[i]<<" ";
    }
    cout<<endl;
    int l=0,p=n;
    int sr;
    while(l<p){
        sr=(l+p)/2;
        if(t[sr]==x){
            cout<<"pod indeksem "<<sr<<endl;
            return sr;
        }
        else if(t[sr]<x){
            l=sr;
        }
        else{
            p=sr;
        }
    }
    cout<<"liczby nie ma w tablicy"<<endl;
    return sr;

}

int Tablica::wartownik(int x) {
    vector <int> t={};
    for(int i=0;i<=n;i++){
        t.push_back(tab[i]);
    }
    for(int i=0;i<=n+1;i++) {
        if (x == t[i]) {
            cout << "liczba znajduje sie pod ineksem " << i << endl;
            break;
        }
        if (i == n + 1){
            cout<<"nie ma liczby w tablicy"<<endl;
            t.push_back(x);
            break;
        }


    }
    for(int i=0;i<t.size();i++){
        cout<<t[i]<<" ";
    }
    cout<<endl;
    return x;

}



int main() {
    int tab[] = {9,7,5,3,1};
    int n = sizeof(tab)/sizeof(tab[0])-1;
    Tablica test(tab, n);
    test.liniowe(5);
    test.wartownik(11);
    test.binarne(3);

    return 0;
}

