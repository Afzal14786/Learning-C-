#include <iostream>
using namespace std;

class Base {
    private:
        int a = 10;
        int b = 20;

    public:
        static int count;
        Base() {
            a++;
            b++;
            count++;
        }

    static int getCount() {
        return count;
    }
};

int Base::count = 8;

int main() {
    Base b;
    cout << b.getCount() << endl;
    cout << Base::getCount() << endl;
    cout << Base::count << endl;
    return 0;
}