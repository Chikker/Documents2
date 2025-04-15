#include <iostream>
#include <vector>

using namespace std;
class produkty{
    string name;
public:
    produkty(string);
    string getname();
};

produkty::produkty(string name) {
    this->name = name;

}

string produkty::getname() {
    return name;
}

class koszyk{
    vector<produkty> product;
public:
    void add(produkty);
    void poka();
};

void koszyk::add(produkty pro) {
    product.push_back(pro);
}

void koszyk::poka() {
    for (int i = 0; i < product.size(); i++){
        cout << product[i].getname() << endl;
    }
}

int main() {
    produkty gowno("miekka kupa");
    koszyk koszyk1;
    koszyk1.add(gowno);
    produkty jajko ("jadra meskie");
    koszyk1.add(jajko);
    koszyk1.poka();
    return 0;
}
