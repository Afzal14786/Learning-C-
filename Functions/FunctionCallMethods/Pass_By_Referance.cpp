#include <iostream>
using namespace std;

void swap (int &a, int &b) {
    int temp = a;
    a =b;
    b = temp;
}

int main() {

    int x = 20, y = 45;
    cout << "Befor Function Calling The Value Of x & y is : \n";
    cout << "x = " << x << " & y = " << y << endl;

    // function calling
    swap(x, y);
    cout << "After Function Calling The Value Of x & y is : \n";
    cout << "x = " << x << " & y = " << y << endl;

    /*
        # In call by reference too, the actual parameter get change inside the main function.
        and the value's inside the main function is changed.

        Output :
        ---------------------------
            
    */

    return 0;
}