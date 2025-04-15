#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void graj() {
        cout << "Instrument gra dzwiek" << endl;
    }

    virtual ~Instrument() {}
};

class Gitara : public Instrument {
public:
    void graj() override {
        cout << "Gitara gra akordy" << endl;
    }
};

class Fortepian : public Instrument {
public:
    void graj() override {
        cout << "Fortepian gra melodie" << endl;
    }
};

int main() {
    Instrument* instrument1 = new Gitara();
    Instrument* instrument2 = new Fortepian();

    Instrument* dInstrument = nullptr;

    dInstrument = new Gitara();

    dInstrument->graj();

    instrument1->graj();
    instrument2->graj();


    delete instrument1;
    delete instrument2;
    delete dInstrument;

    return 0;
}

