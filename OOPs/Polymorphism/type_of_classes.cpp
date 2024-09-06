#include <iostream>
using namespace std;

class Base {
    /**
     * When a class with all concrete function then :
     *      the purpose of this class is "Reusability".
     * 
     * In this all the functions are defined in the class itself.
     */

    public:
        void fun() {
            cout << "Here Function Is Defined." << endl;
        }
};

class Base2 {
    /**
     * When a parent class with some concrete function and some "pure virtual function" then:
     *  this class becomes "Abstract".
     * 
     * -> And the purpose of this class is both "Reusability as well as Polymorphism";
     * -> We cannot create the object of this class but we can assign a pointer to this class.
     */

    void fun() {
        cout << "The Function is Defined Here." << endl;
    }
    virtual void fun2() = 0;
};

class Base3 {
    /**
     * A Parent class where all the functions are "pure virtual function", this class becomes an Abstruct class
     * & this class is become Interface.
     * 
     * the class of this purpose is "Polymorphism".
     */

    public:

    /** All this functions are becomes pure virtual functions*/
    /**
     * If any class want's to inherite this class then child class must override the functions.
     */
        virtual void fun1() = 0;
        virtual void fun2() = 0;
};

int main() {

    return 0;
}