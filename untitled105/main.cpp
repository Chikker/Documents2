#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() { cout << "Rysuje gowno" << endl;}
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override { cout << "Rysuje penisy" << endl;}
};

class Square : public Shape {
    public:
    void draw() override { cout << "Rysuje kwadrat" << endl;}
};

class Rectangle : public Shape {
    public:
    void draw() override { cout << "Rysuje prostokat" << endl;}
};
int main() {
    Shape* shapes[] = {new Circle, new Square, new Rectangle};
    for (Shape* s : shapes) {
        s->draw();
    }

    for (Shape* s : shapes) {
        delete s;
    }
    return 0;
}
