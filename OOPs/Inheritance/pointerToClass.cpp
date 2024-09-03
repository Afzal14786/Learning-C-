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

class BasicCar {
    public:
        virtual void start() {
            cout << "The Car Is Started." << endl;
        }

        virtual void end() {
            cout << "The Car Is Off." << endl;
        }
};

class AdvanceCar : public BasicCar {
    public:
        void start() {
            cout << "The Advance Car Is Started.";
        }

        void end() {
            cout << "The Advance Car Is Off." << endl;
        }

        void mediaPlayer() {
            cout << "Starting The Media Player." << endl;
        }
};

int main() {
    
    // Base *base_class = new Derived();
    // base_class->fun();

    BasicCar *bcar = new AdvanceCar();
    bcar->start();
    bcar->end();
    
    /**
     *      Error After Running The Below Written Code.
     * 
     * It is not allowed to create a pointer of advance class and assign it to the object of base class.
     * 
     * afzal@root:~/VSCodes/C++ By Abdul Sir/OOPs/Inheritance$ g++ pointerToClass.cpp 
        pointerToClass.cpp: In function ‘int main()’:
        pointerToClass.cpp:56:35: error: invalid conversion from ‘BasicCar*’ to ‘AdvanceCar*’ [-fpermissive]
        56  |     AdvanceCar *ad = new BasicCar();
            |                                   ^
            |                                   |
            |                                   BasicCar*
        afzal@root:~/VSCodes/C++ By Abdul Sir/OOPs/Inheritance$ 

     */
    AdvanceCar *ad = new BasicCar();
    ad->start();
    ad->end();
    ad->mediaPlayer();

    return 0;
}