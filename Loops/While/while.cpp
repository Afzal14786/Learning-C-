#include <iostream>
using namespace std;

/*
    # In While Loop :
        * If condition is false then the block of code will not execute.
        * And condition must be false after a finite iteration otherwise
        * it become a infinite loop.

    # Syntax
    while(<condition>) {
        *process*
        *code*
    }
*/

int main() {
    int x = 1;
    // Finite Loop //
    while (x <= 10) {
        cout << x << " ";
        x++;
    }
    cout << "\n";

    // Infinite Loop //
    // while (x <= 10) {
    //     cout << x << " ";
    // }
    return 0;
}