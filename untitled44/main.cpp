#include <iostream>
using namespace std;
void fun1 (int a, int&b, int *c){
    a = 100;
    b = 101;
    *c = 102;
}
int main() {
    int a = 10;
    int b = 11;
    int *c = &a;
    fun1(a,b,c);
    cout << a <<endl<< b << endl<<* c<< endl;
    return 0;
}
