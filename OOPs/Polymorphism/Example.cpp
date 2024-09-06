#include <iostream>
using namespace std;

class Shapes {
    public:
        virtual float area() = 0;
        virtual float perimeter() = 0;
};

class Rectangle : public Shapes {
    private:
        int length;
        int breadth;
    
    public:
        Rectangle(int length, int breadth) {
            this->length = length;
            this->breadth = breadth;
        }

        float area() {
            return length * breadth;
        }

        float perimeter() {
            return 2 * (length + breadth);
        }
};

class Circle : public Shapes {
    private:
        float radius;
        float pi_value = 3.14;

    public:
        Circle(float radius) {
            this->radius = radius;
        }

        float area() {
            return pi_value * radius * radius;
        }

        float perimeter() {
            return 2 * pi_value * radius;
        }
};

int main() {

    int length, breadth;
    float radius;
    cout << "Enter The Length & Breadth Of Rectangle : ";
    cin >> length >> breadth;

    Shapes *sh = new Rectangle(length, breadth);
    cout << "Area Of Rectangle Is : " << sh->area() << endl;
    cout << "Perimeter Of Rectangle Is : " << sh->perimeter() << endl;

    cout << "----------------------------------------------\n";


    cout << "Enter The Radius Of The Circle : ";
    cin >> radius;
    sh = new Circle(radius);
    cout << "Area Of Circle Is : " << sh->area() << endl;
    cout << "Perimeter Of Circle Is : " << sh->perimeter() << endl;
    return 0;
}