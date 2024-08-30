#include <iostream>
using namespace std;

/**
 * It will call first the base class default constructor then call it's own default constructor.
 */
class Base {

    public:
        Base() {
            cout << "Default Constructor of Base Class.\n";
        }

        Base(int x) {
            cout << "Parematerize Class Of Base Class is : " << x << endl;
        }
};

class Derived : public Base {
    public:
        Derived() {
            cout << "Default Constructor of Derived Class.\n";
        }

        Derived(int n) {
            cout << "Paremetrize Constructor of Derived Class.\n" << n << endl;;
        }

            /**
     * Here variable x which is passed as argument, it sent to the Base class Constructor to the parameter constructor.
     */
        Derived(int x, int y) : Base(x) {
            cout << "Parameter of Derived Constructor is : " << y << endl;
        }
};

int main() {

    // Derived d;

    Derived d2(20, 10);
    return 0;
}