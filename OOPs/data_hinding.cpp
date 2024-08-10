#include <iostream>
using namespace std;

class Rectangle {

    /**
     * Here we acchieved data hinding.
     * Private the data member's and public the methods.
     * Methods can take input and check if the inputs are valid or not.
     * Here user directly cannot access the data (length, breadth).
     * Using methods, user can access the data but cannot modifiy it directly
     */

    private:
        int length;
        int breadth;

    public:

        void setlength(int length) {
            if (length >= 1) {
                this->length = length;
                return;
            } else {
                cout << "Please enter a valid Length, it must be >= 1.\n";
                length = -1;
                return;
            }
        }

        void setbreadth(int breadth) {
            if (breadth >= 1) {
                this->breadth = breadth;
                return;
            } else {
                cout << "Please enter a valid Breadth, it must be >= 1.\n";
                breadth = -1;
                return;
            }
        }

        int getbreadth() {
            return breadth;
        }

        int getlength() {
            return length;
        }

        /**
         * Lets calculate the area and perimeter of a Rectangle :
         */

        int area() {;
           return (length*breadth); 
        }

        int perimeter() {
            return 2 * (length + breadth);
        }

};

int main() {
    /**
     * Here let's call the Rectangle class
     */

    Rectangle rec;
    rec.setlength(10);
    rec.setbreadth(10);

    cout << "Area Of The Rectangle Is : " << rec.area() << endl;
    cout << "Perimeter Of The Rectange Is : " << rec.perimeter() << endl;
    return 0;
}