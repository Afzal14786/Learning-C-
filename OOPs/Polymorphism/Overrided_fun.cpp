#include <iostream>
using namespace std;

class BasicCar {
    public:
        virtual void start() {
            cout << "Basic Car Started." << endl;
        }

        virtual void stop() {
            cout << "Basic Car Stoped." << endl;
        }
};

class Advance_Car : public BasicCar{
    public:
        void start() {
            cout << "Advance Car Started." << endl;
        }

        void stop() {
            cout << "Advance Car Stoped." << endl;
        }
};

int main() {
    BasicCar *car = new Advance_Car();
    car->start();
    car->stop();
};