#include <iostream>
using namespace std;

class Shapes {
    private:
        int length;
        int breadth;
        int height;

    public:
        void setLength(int length) {
            this->length = length;
        }

        void setBreadth(int breadth) {
            this->breadth = breadth;
        }

        void setHeight(int height) {
            this->height = height;
        }

        int getLenght() {
            return length;
        }

        int getBreadth() {
            return breadth;
        }

        int getHeight() {
            return height;
        }

        virtual int area();
        virtual int perimeter();
};

class Rectangle : public Shapes {
    public:
        int area() {
            return getLenght() * getBreadth();
        }

        int perimeter() {
            return 2 * (getLenght() + getBreadth());
        }
};

int main() {

    Shapes *sh = new Rectangle();
    int len, bre;

    cout << "Enter Len & Bre : ";
    cin >> len >> bre;

    sh->setLength(len);
    sh->setBreadth(bre);

    cout << sh->area() << endl;
    cout << sh->perimeter() << endl;
    return 0;
}

int Shapes::area()
{
    return 0;
}

int Shapes::perimeter()
{
    return 0;
}
