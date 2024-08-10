#include <iostream>
#include <math.h>
using namespace std;

/**
 * --------------------- Constructor Notes -----------------------------------
 * A Constructor is a special type of method in OOPs .
 * They are called automatically when the an object of a class is called.
 * The primary object of a constructor is to initialize the newly created object.
 * There are three types of Constructors.
 *      -> Default Constructor.
 *      -> Parameterize Constructor.
 *      -> Copy Constructor.
 * 
 *  ##### Default Constructor #####
 * A constructor which didn't take any parameter in called Default constructor.
 *  There are two types of default constructor : 
 *          1. Compiler Provided Constructor.
 *          2. User-Define Constructor.
 */

class Circle2 {
    private:
        double pi_value = 3.14159265359;
        double radius;
    
    public:
        void setRadius(double radius) {
            this->radius = radius;
        }

        double area();
        double Circumference();
        double diameter();
        double radius_find();
};

double Circle2::area() {
    return pi_value * radius * radius;
}

double Circle2::Circumference() {
    double ans = 2 * pi_value * radius;
    return ans;
}

double Circle2::diameter() {
    return 2 * radius;
}

double Circle2::radius_find() {
    return Circumference()/ (2*pi_value);
}

/**
 * Let's See How A Parameterize Constructor Look Like : 
 */

class Rectangel {
    private:
        int length;
        int breadth;
    
    public:
        // Rectangel();    // User Define : Default Constructor 

        // Parameterize Constructr.
        Rectangel(int length, int breadth) {
            this->length = length;
            this->breadth = breadth;
        }

        // Copy Constructor
        // Rectangel(Rectangel &rec);

        void setLength(int length);
        void setBreadth(int breadth);

        int getLength();
        int getBreadth();

        int area();
        int perimeter();
        double diagnol();
        bool isSquare();

        // Distructor.
        ~Rectangel();
};

/**
 * Implement the method's outside the class using scope resolution(::).
 */

void Rectangel::setLength(int length) {
    if (length <= 0) {
        cout << "Invalid Length. It Should Be > 0.\n";
    } else {
        this->length = length;
    }
}

void Rectangel::setBreadth(int breadth) {
    if (breadth <= 0) {
        cout << "Invalid Breadth. It Should Be > 0.\n";
    } else {
        this->breadth = breadth;
    }
}

int Rectangel::area() {
    return length*breadth;
}

int Rectangel::perimeter() {
    return 2 * (length + breadth);
}

double Rectangel::diagnol() {
    return sqrt((length * length) + (breadth * breadth));
}

bool Rectangel::isSquare() {
    if (length == breadth) {
        return true;
    } else {
        return false;
    }
}

Rectangel::~Rectangel() {
    cout << "Rectangle Distructor.\n";
}

int main() {
    // Circle Class Called Inside Main Function //
    // Here Default constructor is provided by the compailer.
    /**
     * 

    Circle2 *c2 = new Circle2();
    c2->setRadius(12.44);
    cout << "Area Of Circle is : "<< c2->area() << endl;
    cout << "Circumference Of Circle is : " << c2->Circumference() << endl;
    cout << "Diameter Of the circle is : " << c2->diameter() << endl;
    cout << "Radius of the circle is : " << c2->radius_find() << endl;
    
    */
    // ------------- End Of The Circle Class Function Call Inside main() ------
    /* Rectange Class Call*/
    int len;
    int bre;
    cout << "Enter The Length : ";
    cin >> len;
    cout << "Enter The Breadth : ";
    cin >> bre;

    Rectangel *rec = new Rectangel(len, bre);
    rec->setLength(len);
    rec->setBreadth(bre);

    cout << "Area of rectangle is : " << rec->area() << endl;
    cout << "Perimeter of rectangle is : " << rec->perimeter() << endl;
    cout << "Is It a Square : " << rec->isSquare() << endl;
    cout << "Diagnoal of rectangle is : " << rec->diagnol() << endl;

    


    return 0;
}