#include <iostream>
#include "random"
using namespace std;


bool czyUnikalna(int tab[],int n,int liczba){

    for(int i = 0;i<n;i++){
        if (tab[i] ==liczba){
            return false;
        }
    }
    return true;
}



int sortuj(int tab[],int n){
    int mem;
    for(int j = 1;j<n;j++){
        for(int i = 1;i<n;i++){
            if(tab[i-1] > tab[i]){
                mem = tab[i-1];
                tab[i-1] = tab[i];
                tab[i] = mem;
            }
        }
    }
    return *tab;
}
void porownaj(int *tab,int *tab2,int n){
    int j = 0;

    for(int i = 0;i<n;i++){
        if(tab2[i] == tab[i]) {
            j++;
        }

    }
    if(j >=3){
        cout<<"Brawo trafiles: "<<j;
    }
}

void losuj6(){
    int los;


    int licz;
    cout<<"Ile liczb: ";
    cin>>licz;
    int tab[licz];
    int tab2[licz];
    for(int i = 0;i<licz;i++){
        do{
            los = rand() %45+1;
        } while (!czyUnikalna(tab,i,los));
        tab[i] = los;
    }
    for(int i = 0;i<licz;i++){
        do{
            los = rand() %45+1;
        } while (!czyUnikalna(tab,i,los));
        tab2[i] = los;
    }
    sortuj(tab,licz);
    sortuj(tab2,licz);

    for(int i = 0;i<licz;i++){
        cout<<tab[i]<<" "<<tab2[i]<<"\n";
    }
    porownaj(tab,tab2,licz);



}



int main() {
    srand(time(nullptr));


    losuj6();

}
