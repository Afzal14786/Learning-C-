#include <iostream>
using namespace std;

class Base {
    public:
    /**
     * If we could not use virtual class and inside main function we create the object of Derived class and pointer of Base class points to the object of Derived class then the function which is inside the Base class, it's called.
     */
        virtual void fun() {
            cout << "Function of Base Class." << endl;
        }
};

class Derived : public Base {
    public:
        void fun() {
            cout << "Function of Derived Class." << endl;
        }
};

int main() {
    
    Base *base_class = new Derived();
    base_class->fun();

    return 0;
}