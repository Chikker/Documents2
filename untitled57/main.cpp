#include <iostream>

using namespace std;
string spacja(int n){
    if( n == 1)
        return " ";

    if(n >10)
        return " ";
    return spacja(n+1)+" ";
}
string rysujGw(int n){
    if(n == 1)
        return "";
    return rysujGw(n-1) +"*";
}

string choinka(int n){
    if(n<=1)
        return "";
    return choinka(n-1)+ spacja(n)+ rysujGw(n) + rysujGw(n-1)+  "\n";
}


int main() {

    cout<<choinka(9);

    return 0;
}
