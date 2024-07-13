#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *p;     // Decleration Of A pointer //
    p =  &x;    // Initialization of a pointer //

    
    cout << x << endl;      // Data store in data variable x : 10 //
    cout << p << endl;      // Address Strore In Pointer Variable p : 0x7ffdf001917c //
    cout << &x << endl;     // Address Of Data Variable x : 0x7ffdf001917c //
    cout << &p << endl;     // Address Of Pointer Itself : 0x7ffdf0019180 //
    cout << *p << endl;     // Dereferencing the pointer and the value is : 10//

    return 0;
}