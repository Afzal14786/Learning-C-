#include <iostream>
using namespace std;

class Derived;

class My {
    private:
        string name = "Afzal";
        int age = 20;

    protected:
        float salary = 13000.00;
        string address = "Navi Mumbai Maharashtra";

    public:
        string emp_id = "STL225826";

    friend Derived;
};

/**
 * Here class is define as friend class. 
 * This class can access all the members of Base class including private member's.
 */
class Derived {
    public:
        My me;
        void information() {
            cout << "Name Is " << me.name << endl;
            cout << "Age Is " << me.age << endl;
            cout << "My Emp Id : " << me.emp_id << endl;
            cout << "My Salary Is : " << me.salary << endl;
            cout << "My Address Is : " << me.address << endl;
        }
};

class Derived2;
class Test2 {
    private:
        string name = "Afzal";
        int age = 20;

    protected:
        float salary = 13000.00;
        string address = "Navi Mumbai Maharashtra";

    public:
        string emp_id = "STL225826";

    friend void infor();
    friend Derived2;
};

class Derived2 {
    public:
        Test2 test;

        
};

int main() {

    Derived d;
    d.information();
    return 0;
}