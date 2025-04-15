#include <iostream>
#include <vector>

using namespace std;
vector<int> ShellSort(vector<int> myList) {
    int distance = myList.size() / 2;
    while (distance > 0) {
        for (int i = distance; i < myList.size(); i++) {
            int temp = myList[i];
            int j = i;
            while (j >= distance && myList[j - distance] > temp) {
                myList[j] = myList[j - distance];
                j = j - distance;
            }
            myList[j] = temp;
        }
        distance = distance / 2;
    }
    return myList;
}

int main() {
    vector<int> sortedList = ShellSort({5, 8, 3, 2, 5, 1});
    for (int num : sortedList) {
        cout << num << " ";
    }
    return 0;
}

