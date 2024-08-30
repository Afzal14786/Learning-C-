#include <iostream>
using namespace std;

/**
 * A class can be derived by another class or a class can be created it's object inside a class.
 */

class Rectangle {
    private:
        int length;
        int breadth;

    protected:
        int size;
    public:
        int area() {
            return length * breadth;
        }
        void setLength(int length) {
            this->length = length;
        }

        void setBreadth(int breadth) {
            this->breadth = breadth;
        }

        int getLength() {
            return length;
        }

        int getBreadth() {
            return breadth;
        }
};

class cuboid:public Rectangle {
    // the rectangle is inheritade by cuboide class, so there is "Is relationship" with the class.
    /**
     * we cannot access the private member's of derived class inside the cuboid class
     * only public member's function and members are access in derived function.
     */
    public:
        void setSize(int size) {
            this->size = size;
        }
        void calcArea() {
            return getLength() * getBreadth();
        }

};
class Table {
    // Object of the class.
    // There is has relationship with the Table class because the object of rectangle class is created inside the table class

    // only public member's are accessible here.
    // private and protected data member's and functions are restricted.
    private:
        int legs;
    public:
        Rectangle rectangle;

};
/**
 * There are three types of members inside a class
 *      -> private      (Accessible only inside the class)
 *      -> protected (Accessible inside the class only not inside main function)
 *      -> public   (Accessible in all files)
 */



int main() {

    Rectangle rec;

    // rec.length = 10;     -> private variables or data member's are not accessible
    // rec.breadth = 20;      -> private variables or data member's are not accessible
    // rec.size = 12;           -> protected variable's are also not accepted inside main function.

    

    rec.setLength(10);
    rec.setBreadth(12);
    cout << rec.area() << endl;

    Table table;
    int len = table.rectangle.area();
    cout << len << endl;
    return 0;
}