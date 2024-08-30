#include <iostream>
using namespace std;

class Parent {

public:
    string eyeColor;
    string noseColor;
    float height;

    void show() {
        cout << "Eyecolor is : " << eyeColor << endl;
        cout << "Nose Color is : " << noseColor << endl;
        cout << "Height is : " << height << endl;
    }
};

class Child : public Parent {
    public:
        string additionalFeature;
        void display () {
            cout << "Additional Feature : " << additionalFeature << endl;
        }
};

/**
 * Above example is known as 
 *  Specialization in Inheritance where the base class exist in real world.
 *  we can specify more extra features in this approach.
 */
class Rectangle {
    private:
        int length;
        int breadth;

    public:
        Rectangle();
        Rectangle(int length, int breadth);
        Rectangle(Rectangle &r);
        int getLength() {
            return length;
        }
        int getBreadth() {
            return breadth;
        }
        void setLength(int length);
        void setBreadth(int breadth);
        int area();
        int perimeter();
        // ~Rectangle();
};

class Cuboid : public Rectangle {
    private:
        int height;
    
    public:
        Cuboid(int length, int breadth, int height) {
            this->height = height;
            setLength(length);
            setBreadth(breadth);
        }

        int getHeight() {
            return height;
        }

        void setHeight(int height) {
            this->height = height;
        }
        int volume() {
            return getLength() * getBreadth() * height;
        }

};

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int length, int breadth)
{
    setLength(length);
    setBreadth(breadth);
}

Rectangle::Rectangle(Rectangle &r)
{

}

void Rectangle :: setLength(int length) {
    this->length = length;
}

void Rectangle :: setBreadth(int breadth) { 
    this->breadth = breadth;
}


int Rectangle:: area() {
    return length*breadth;
}

int Rectangle :: perimeter() {
    return 2 * (length + breadth);
}

int main() {

    Cuboid cube(12, 12, 18);
    int ans = cube.volume();
    cout << "The Volume Is : " << ans << endl;
    cout << "The Area Of Rectangle is : " << cube.area() << endl;
    cout << "The Length is : " << cube.getLength() << endl;
    cout << "The Breadth is : " << cube.getBreadth() << endl;
    cout << "The Height of the cuboid is : " << cube.getHeight() << endl;

    return 0;
}