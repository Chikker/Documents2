#include <iostream>
#include "cmath"
using namespace std;
typedef float (*wsk) (int, int);

float suma(int a,int b){
    return a+b;
}
float roznica(int a,int b){
    return a-b;
}
float mnozenie(int a,int b){
    return a*b;
}
float dzielenie(int a, int b){
    return a/b;
}
float potega(int a, int b){
    return pow(a,b);
}
float pierwiastek1(int a, int b){

    return sqrt(a);
}
float pierwiastek2(int a, int b){

    return sqrt(b);
}
float kalkulator(int a,int b,wsk dzialanie){
    return dzialanie(a,b);
}
void wyswietlanie(int a, int b, string typ){
    if(typ=="+"){
        cout<<kalkulator(a,b,suma);
    }
    else if(typ=="-"){
        cout<<kalkulator(a,b,roznica);
    }
    else if(typ=="*"){
        cout<<kalkulator(a,b,mnozenie);
    }
    else if(typ=="/"){
        cout<<kalkulator(a,b,dzielenie);
    }
    else if(typ=="potega"){
        cout<<kalkulator(a,b,potega);
    }
    else if(typ=="pierwiastek"){
        cout<<kalkulator(a,b,pierwiastek1)<<endl;
        cout<<kalkulator(a,b,pierwiastek2);
    }
    else{
        cout<<"nie ma takiej mozliwosci";
    }

}
int main() {
    int a,b;
    string typ;
    cout<<"podaj 2 liczby"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"wybierz co mam robic (+,-,*,/,potega,pierwiastek): ";
    cin>>typ;
    wyswietlanie(a,b,typ);


    return 0;
}
