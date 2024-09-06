#include <iostream>
using namespace std;

class Test {
    private:
        string name;
        int age;

    protected:
        string emp_id;
    
    public:
        string address;

    friend void information();
};

/**
 * Here a global function can access all the members of Base class because this function is defined as friend inside base class.
 */
void information() {
    Test t;
    t.name = "Afzal";
    t.age = 20;
    t.emp_id = "STL225826";
    t.address = "Mumbai Maharashtra.";
}

/**
 * We cannot call all the members of parent class if we call friend function inside a child class inherite by parent class where the friend function is define.
 *  We can access only the public data memeber's.
 */
class Derive : public Test {
    void information() {
        Test t;
        t.address = "Mumbai Maharashtra";
        t.emp_id = "STL225826";
    }
};

int main() {
    void information();
    return 0;
}