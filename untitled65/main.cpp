#include <iostream>
#include <vector>
#include "random"

using namespace std;
class tablica{
    int n;
    int t[];
public:
    void insertSort();
    void babelSort();
    tablica(int n,int tab[]);
    void show();
};



void tablica::insertSort(){
    vector <int> vec {t[0]};
    bool wst = false;
    for(int i =1;i<n;i++){
        for(int j =0;j<vec.size();j++){
            if(t[i] < vec[j]){
                vec.insert(vec.begin()+j,t[i]);
                wst = true;
                break;
            }
        }
        if(!wst){
            vec.push_back(t[i]);
        }
        wst = false;
    }
    for(int i = 0;i <n;i++){
        t[i] = vec[i];
    }
}

void tablica::babelSort() {
    int mem = 0;

    for(int i = 1;i<n;i++){
        for(int j = 1;j<n;j++){
            if(t[j] <t[j-1]){
                mem = t[j];
                t[j] = t[j-1];
                t[j-1] = mem;
            }
        }
    }
}

tablica::tablica(int n,int tab[]) {
    this->n = n;
    for(int i = 0;i<n;i++){
        t[i] = tab[i];
    }

}

void tablica::show() {
    for(int i = 0;i <n;i++){
        cout<<t[i]<<" ";
    }
}


int main() {
    srand(time(NULL));
    int tab[] = {3,9,6,4,2,3};
    tablica t(6,tab);
    t.babelSort();
    t.show();




    return 0;
}

