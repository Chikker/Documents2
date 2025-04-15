#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

class Seriazable {
    virtual void savetofile (ofstream&) const = 0;
    virtual void loadfromfile (ifstream&) = 0;
};
class Publication {
    public:
    string title, author;
};
class Ebook : public Publication, public Seriazable {
    public:

};
class Audiobook : public Publication, public Seriazable {
  int duration;
};
int main() {

    return 0;
}