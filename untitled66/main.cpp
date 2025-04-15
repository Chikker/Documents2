#include <iostream>
using namespace std;
void pesell(string pesel){
    int waga[] = {1,3,7,9,1,3,7,9,1,3};
    int s = 0;
    for(int i =0 ; i<10;i++){
        s += int((pesel[i]) -48)*waga[i];

    }
    int m = s%10,r;
    if(!m)
        r = 0;
    else
        r=10-m;
    if(r == int(pesel[10])-48)
        cout<<"pesel jest poprwany"<<endl;
    else
        cout<<"pesel jes blendy";

}
void kobietaCzyMezczyzna(string pesel){
    if(pesel[10]%2==0){
        cout<<"Kobieta";
    }
    else
        cout<<"Mezczyzna";
}



;
int main() {
    string pesel = "49050319922";

    pesell(pesel);
    kobietaCzyMezczyzna(pesel);
    return 0;
}

