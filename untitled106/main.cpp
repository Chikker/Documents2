#include <iostream>
using namespace std;

class Operation {
public:
    virtual double calculate(double a, double b) { return 0; }
    virtual ~Operation() {}
};

class Addition : public Operation {
public:
    double calculate(double a, double b) override { return a + b; }
};

class Subtraction : public Operation {
public:
    double calculate(double a, double b) override { return a - b; }
};

class Multiplication : public Operation {
public:
    double calculate(double a, double b) override { return a * b; }
};

class Division : public Operation {
public:
    double calculate(double a, double b) override {
        if (b == 0) {
            throw invalid_argument("Nie można dzielić przez zero!");
        }
        return a / b;
    }
};

int main() {
    Operation* operations[] = {new Addition, new Subtraction, new Multiplication, new Division};

    char oper;
    cout << "Wybierz operację (+, -, *, /): ";
    cin >> oper;

    double a, b;
    cout << "Podaj dwie liczby: ";
    cin >> a >> b;

    try {
        Operation* selectedOperation = nullptr;

        switch (oper) {
            case '+':
                selectedOperation = operations[0];
            break;
            case '-':
                selectedOperation = operations[1];
            break;
            case '*':
                selectedOperation = operations[2];
            break;
            case '/':
                selectedOperation = operations[3];
            break;
            default:
                cout << "Nieznana operacja!" << endl;
            return 1;
        }

        if (selectedOperation) {
            double result = selectedOperation->calculate(a, b);
            cout << "Wynik: " << result << endl;
        }

    } catch (const exception& e) {
        cerr << "Błąd: " << e.what() << endl;
    }

    for (Operation* op : operations) {
        delete op;
    }

    return 0;
}