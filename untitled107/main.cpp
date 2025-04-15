#include <iostream>
#include <vector>

using namespace std;

class List {
    vector<int> lista;
public:
    List() {
        cout << "Utworzono listę." << endl;
    }

    List(const List &other) {
        lista = other.lista;
        cout << "Skopiowano listę." << endl;
    }

    void dodaj_przod(int liczba) {
        lista.insert(lista.begin(), liczba);
        cout << "Dodano liczbę " << liczba << " na początek listy." << endl;
    }

    void dodaj_tyl(int liczba) {
        lista.push_back(liczba);
        cout << "Dodano liczbę " << liczba << " na koniec listy." << endl;
    }

    void usun_przod() {
        if (!lista.empty()) {
            cout << "Usunięto liczbę " << lista.front() << " z początku listy." << endl;
            lista.erase(lista.begin());
        } else {
            cout << "Lista jest pusta. Nie można usunąć pierwszego elementu." << endl;
        }
    }

    void usun_tyl() {
        if (!lista.empty()) {
            cout << "Usunięto liczbę " << lista.back() << " z końca listy." << endl;
            lista.pop_back();
        } else {
            cout << "Lista jest pusta. Nie można usunąć ostatniego elementu." << endl;
        }
    }

    int pierwszy_el() const {
        if (!lista.empty()) {
            return lista.front();
        } else {
            cout << "Lista jest pusta. Brak pierwszego elementu." << endl;
            return -1;
        }
    }

    int ostatni_el() const {
        if (!lista.empty()) {
            return lista.back();
        } else {
            cout << "Lista jest pusta. Brak ostatniego elementu." << endl;
            return -1;
        }
    }

    bool pusta_lista() const {
        return lista.empty();
    }
};

int main() {
    List lista;

    lista.dodaj_tyl(10);
    lista.dodaj_tyl(20);
    lista.dodaj_przod(5);
    lista.dodaj_tyl(30);

    cout << "Pierwszy element: " << lista.pierwszy_el() << endl;
    cout << "Ostatni element: " << lista.ostatni_el() << endl;

    lista.usun_przod();
    lista.usun_tyl();

    cout << "Czy lista jest pusta? " << (lista.pusta_lista() ? "Tak" : "Nie") << endl;

    return 0;
}