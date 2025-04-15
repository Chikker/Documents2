#include <iostream>
using namespace std;
struct developerSetting{
    string contrast, LifeTime, softDebug
};
struct ekran{
    string rozdzielczosc, matryca, cale;
};
class Smarthpone{
    developerSetting noName;
public:
    ekran screen;
    void setSmartphone(string a, string b, string c){
        noName.contrast= a;
        noName.LifeTime= b;
        noName.softDebug= c;
    };

};
int main() {

    return 0;
}
