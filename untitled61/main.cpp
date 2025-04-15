#include <iostream>
using namespace std;
int wydaj(int reszta, int * ileMonet) {
    int ile = 0;
    int nominal[] = {5,2,1};
    int i = 0;
    while (reszta !=0){
        if(ileMonet[i] !=0) {
            if (reszta >= nominal[i]) {
                ile += 1;
                reszta -= nominal[i];
                cout << "wydaje: " << nominal[i] << endl;

            } else if (i < sizeof(nominal) / sizeof(nominal[0])) {

                i++;
            }
            ileMonet[i] -=1;
        }
        else ileMonet[i] -= 1;
    }
    return ile;
}
int main() {
    int tab[] = {1,4,8};
    cout << wydaj(18,tab);
    return 0;
}

