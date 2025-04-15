#include <iostream>
using namespace std;

void sortowaniePrzezWybieranie(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int indexMin = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[indexMin]) {
                indexMin = j;
            }
        }
        swap(arr[i], arr[indexMin]);
    }
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;
}

int main() {
    int tablica[] = {1, 2, 5, 4, 2, 1, 6, 7, 0};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);
    sortowaniePrzezWybieranie(tablica, rozmiar);
    return 0;
}
