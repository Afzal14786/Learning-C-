#include <iostream>
using namespace std;

class Parent {
    private:
        int age = 20;
        string gender = "male";
    
    public:
        int salary = 13000;
    protected:
        string id = "STL225826";

};

class Child: public Parent {
    private:
        int x = 20;

    protected:
        string name = "Afzal";
    public:
    /* All the member's are accessible if the child class is derived as publicly. */
        void data() {
            /* Age cannot be access here because it is private in parent class.*/
            age = 30;
            gender = "Afzal";
            id = "STL225826";
        }
};

class grandChild : public Child {
    /* x cannot be access here because it is declared as private in it's parent class (child)*/
    x = 30;
    name = "Hello";
    void data(){
        age = 30;
        gender = "Hello";
        id = "STL123456";
    }

};

int main() {

    return 0;
}