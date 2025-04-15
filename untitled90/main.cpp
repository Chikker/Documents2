#include <iostream>
#include <cmath>
using namespace std;

void rozwiazRownanieKwadratowe(double a, double b, double c) {
    double delta, x, x1, x2;
    if (a == 0) {
        cout << "To nie jest równanie kwadratowe" << endl;
        return;
    } else {
        delta = (b * b) - (4 * a * c);
    }
    if (delta < 0) {
        cout << "Równanie nie ma pierwiastków" << endl;
    } else if (delta == 0) {
        x = -b / (2 * a);
        cout << "x = " << x << endl;
    } else {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Wprowadź wartości a, b, c: ";
    cin >> a >> b >> c;
    rozwiazRownanieKwadratowe(a, b, c);
    return 0;
}
