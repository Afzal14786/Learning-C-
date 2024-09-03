#include <iostream>
using namespace std;

class Car {
    public:
        virtual void start() {
            cout << "Car Started." << endl;
        }

        virtual void stop() {
            cout << "Car Stopped." << endl;
        }
};

class Innova : public Car {
    public:
        void start() {
            cout << "Innova Started." << endl;
        }

        void stop() {
            cout << "Innova Stopped." << endl;
        }
};

class BMW : public Car {
    public:
        void start() {
            cout << "BMW Started." << endl;
        }

        void stop() {
            cout << "BMW Stopped." << endl;
        }
};

/**
 * Pure Virtual Function :
 *          if we want to make any function of patent class is compulsory to be overrider in child class then we should make the virtual functions of parent class as "pure virtual class."
 * 
 * Following Example for Pure Virtual class.
 */

class Parent {
    public:
        virtual void behaviour() = 0;       // this line makes the function as "pure virtual function."
        virtual void sence_of_humore() = 0;
        virtual void self_respect() = 0;
};

class Child1 : public Parent {
    public:
        void behaviour() {
            cout << "Behavious is Good As your Parent" << endl;
        }

        void sence_of_humore() {
            cout << "Sence Of Humor Is Good As Your Parent." << endl;
        }

        void self_respect() {
            cout << "Make Sure Your Self Respect In Top." << endl;
        }

};

class Child2 : public Parent {
    public:
        void behaviour() {
            cout << "Ohk Papa." << endl;
        }

        void sence_of_humore() {
            cout << "Ohk Papa." << endl;
        }

        void self_respect() {
            cout << "Ohk Papa." << endl;
        }
};

int main() {
/*

    Car *c = new Innova();
    /**
     * Here the object of innova called 

    c->start();
    c->stop();
*/
/**
 * here the pointer is no more points to innova objects because after writing:
 *      c = new BMW();
 *      pointer of car 'c' points to BMW's objects.
 
    c = new BMW();
    c->start();
    c->stop();
*/

    Parent *p = new Child1();
    p->behaviour();
    p->self_respect();
    p->sence_of_humore();

    cout << endl;

    p = new Child2();
    p->behaviour();
    p->self_respect();
    p->sence_of_humore();
    return 0;
}