#include <iostream>
using namespace std;

class Base {
    public:
        void fun() {
            cout << "Function Of Base Class." << endl;
        }
};

class Derived:public Base {
    public:
        void fun() {
            cout << "Function Of Derived Class." << endl;
        }
};

int main() {

    Base *b = new Derived();
    b->fun();
    /**
     * Function Of Base Class.
     */
    return 0;
}