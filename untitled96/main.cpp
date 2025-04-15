#include <iostream>
#include "cmath"
using namespace std;
 float kwadrat(int a, int b, int c){
     double x1;
     double x2;
     double pom;
     double delta;
     if ( a == 0){
         cout<< "\nTo nie jest rownanie kwadratowe";
         return 0;
     } else {
         delta = (b*b)-(4*a*c);
         if(delta <0){
             cout<<"Rowananie nie ma pierwiastkow" << endl;
         } else if (delta ==0) {
             int x = b/(2*a);
             cout << x << endl;
             return 0;
         } else {
             pom =c/a;
             if (b>0){
                 x1 = (-b - sqrt(delta))/(2*a);
                 x2 = pom/x1;
                 cout << x1 << endl << x2 << endl;
                 return 0;
             } else{
                 x2 = (-b + sqrt(delta))/(2*a);
                 x1 = pom/x2;
                 return 0;
             }
         }
     }
 }
int main() {
    int a, b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    kwadrat(a,b,c);
    return 0;
}
