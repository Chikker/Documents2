#include <iostream>
using namespace std;
class trojkat{
public:
    int wysokosc, podstawa;
    void setter ( int wysokosc, int podstawa){
        this->wysokosc = wysokosc;
        this->podstawa = podstawa;
    }
    string show(){
        return "Podstawa: " + to_string(podstawa) + "\n Wysokosc: " + to_string(wysokosc);
    }
    int pole(){
        return (podstawa*wysokosc)/2;
    }
};
int main() {
    trojkat trojkacik;
    trojkacik.setter(10,15);
    cout <<trojkacik.show();
    cout <<trojkacik.pole();
    return 0;
}
