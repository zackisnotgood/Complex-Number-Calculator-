
#include <iostream>
using namespace std;

class Complex {
private:
    double real, imag;

public:
    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real;

        if (c.imag >= 0)
            out << " + " << c.imag << "i";
        else
            out << " - " << -c.imag << "i";

        return out;
    }
};

int main() {
    double r1, i1, r2, i2;

    cout << "Complex Number Calculator\n";

    cout << "Enter real and imaginary parts of first number: ";
    if (!(cin >> r1 >> i1)) {
        cout << "Invalid input!\n";
        return 1;
    }

    cout << "Enter real and imaginary parts of second number: ";
    if (!(cin >> r2 >> i2)) {
        cout << "Invalid input!\n";
        return 1;
    }

    Complex c1(r1, i1), c2(r2, i2);

    cout << "\nFirst Complex Number: " << c1 << endl;
    cout << "Second Complex Number: " << c2 << endl;
    cout << "Addition: " << c1 + c2 << endl;
    cout << "Subtraction: " << c1 - c2 << endl;

    return 0;
}
