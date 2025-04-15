#include <iostream>
#include <fstream>
#include "random"

using namespace std;
int main() {
    cout << "hitler" << endl;
    srand(time(NULL));
    const int t = 10;
    //ofstream plik("cyfry.txt");
    ofstream plik("hasla.txt");
    if(plik){
       /* int l;
        for (int i = 1; i <1000; i ++){
            l = rand()%10000+1;
            plik << l << endl;
        } */
       int dlug;
       int i=0;
       string haslo;
       char literka;
       while (i != 200){
           dlug = rand()%10+3;
           while(dlug !=0){
               literka = (rand()%25+97);
               haslo+=literka;
               dlug--;
           }
           plik <<haslo << endl;

           i++;
           haslo = "";
       }
    } else {
        cout << "nie moge zapisac do pliku  " << endl;
    }


    //ifstream plok("dane.txt");
    ifstream plok("hasla.txt");
    if (plok){
        string linia;
        while (getline(plok,linia))
            cout <<linia << endl;

    } else
        cout << "nie moge odczytac pliku" << endl;
    return 0;
}
