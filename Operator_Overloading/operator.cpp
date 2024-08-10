#include <iostream>
using namespace std;

/**
 * Today, we are starting a topic in C++ name as "Operator Overloading" ?
 */

class Complex {

    public:
        int real;
        int imeganery;

        Complex(int real, int imeganery) {
            this->real = real;
            this->imeganery = imeganery;
        }

        Complex Operator +(Complex x) {
            Complex temp;
            temp.real = real + x.real;
            temp.imeganery = imeganery + x.imeganery;

            return temp;
        }

        Complex add(Complex x) {
            Complex temp;
            temp.real = real + x.real;
            temp.imeganery = imeganery + x.imeganery;

            return temp;
        }
};

int main() {

    Complex c1, c2, c3;
    c1.real = 5;
    c1.imeganery = 3;
    c2.real = 5;
    c2.imeganery = 6;

    c3 = c1.add(c2);
    cout << c3.real << " +i" << c3.imeganery<< endl;
    return 0;
}