#include <iostream>

class OuterClass {
private:
    int outerData = 10;

public:
    // Non-static inner class
    class NonStaticInnerClass {
    public:
        void display(OuterClass* outer) {
            // Can access private members of OuterClass
            std::cout << "OuterData from NonStaticInnerClass: " << outer->outerData << std::endl;
        }
    };

    // Static inner class
    static class StaticInnerClass {
    public:
        void display() {
            // Cannot access non-static members of OuterClass
            std::cout << "StaticInnerClass cannot directly access outerData" << std::endl;
        }
    };

    void createAndUseInnerClasses() {
        NonStaticInnerClass nonStaticInner;
        nonStaticInner.display(this);

        StaticInnerClass staticInner;
        staticInner.display();
    }
};

int main() {
    OuterClass outer;
    outer.createAndUseInnerClasses();

    // Creating instances outside OuterClass
    OuterClass::NonStaticInnerClass nonStaticInner;
    // nonStaticInner.display(&outer);  // Needs an OuterClass instance

    OuterClass::StaticInnerClass staticInner;
    staticInner.display();  // Can be used without an OuterClass instance

    return 0;
}