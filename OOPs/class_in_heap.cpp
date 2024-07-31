#include <iostream>
using namespace std;


/*
    # We can also create an object of a class inside heap memory using pointer and new keyword.
*/

class Circle {

    public:
        float radius;
        float pi = 3.14159f;

        float area() {

            return pi * radius * radius;
        }

};

int main() {

    /* Here the objcet of the circle is created inside the heap memory and the pointer cr is created insde the stack */
    Circle *cr = new Circle();
    cr->radius = 43.56;
    cout << "The Area Of The Circle Is : " << cr->area() << endl;
    return 0;
}