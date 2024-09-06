#include <iostream>
using namespace std;

class Outer {
public:
    int age = 20;
    static int count;

    void fun() {
        cout << "Inner x: " << i.x << endl;
        cout << "Calling Inner show(): ";
        i.show(*this);  // Pass *this to access non-static members
    }

    class Inner {
    public:
        int x = 19;
        void show(Outer& outer) {
            cout << "Outer age: " << outer.age << endl;
            cout << "Outer static count: " << count << endl;
        }
    };

    Inner i;
};

int Outer::count = 20;

int main() {
    Outer outer;
    outer.fun();

    cout << "\nCreating Inner instance directly:" << endl;
    Outer::Inner in;
    cout << "Inner x: " << in.x << endl;
    
    // To call show(), we need an Outer instance
    Outer anotherOuter;
    cout << "Calling Inner show() with Outer instance:" << endl;
    in.show(anotherOuter);

    return 0;
}