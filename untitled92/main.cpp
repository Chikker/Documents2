#include <iostream>
#include "random"
using namespace std;
void kupsko(int s) {
    int *table = new int(s);
    for( int i= 0; i < s ; i++ ){
        table[i] = rand()%20 + 1;
        cout << table[i] << " ";
    }
    delete table;
}

int main() {
    srand(time(NULL));
    int n;
    cin >> n;
    kupsko(n);
    return 0;
}
