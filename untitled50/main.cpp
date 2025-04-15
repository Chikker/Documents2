/*#include <iostream>
using namespace std;

int bonbel(int*tab, int a){
    int mem = 0;
    for (int i = 0;i <a ;i++){
        for(int j =0;j<a;j++){
            if(tab[j-1] < tab[j])
            mem = tab[j];
            tab[j] = tab[j-1];
            tab[j-1] = mem;
        }
        for(int i = 0; i<a;i++){
            cout << tab[i]<<" ";
        }
    }
    return *tab;
}
int main() {
    int tab[] = {1,3,5,1,2,4};

    return 0;
}
*/
#include<iostream>
using namespace std;

void sortowanie_babelkowe(int tab[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=1;j<n-i;j++)
            if(tab[j-1]>tab[j])
                swap(tab[j-1], tab[j]);
}

int main()
{
    int *tab, n;

    cout<<"Podaj liczby";
    cin>>n;

    tab = new int [n];
    for(int i=0;i<n;i++)
        cin>>tab[i];
    sortowanie_babelkowe(tab,n);
    for(int i=0;i<n;i++)
        cout<<tab[i]<<" ";

    return 0;
}