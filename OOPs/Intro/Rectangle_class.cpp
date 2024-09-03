#include <iostream>
using namespace std;

/* Writing A Rectange.*/
class Rectangle {

    public :

        /* Data Members of a class (Rectangle)*/
        int len;
        int bre;

        /* Function of a class (Rectangle)*/
        int area() {
            return len * bre;
        }

        int perimeter() {
            return 2* (len + bre);
        }
};

int main() {

    /* r1 and r2 are the objects of the class Rectangle.*/
    Rectangle r1,r2;

    /* Accessing the data members using dot (.) operator and objects.*/

    r1.len = 10;
    r1.bre = 20;

    /* We can also access the function of a class using dot (.) operator with the help of objects.*/
    cout << "Area Of A Rectangle is : "<< r1.area() << endl;
    cout << "Perimeter Of A Rectange is : " << r1.perimeter() << endl;

    return 0;
}