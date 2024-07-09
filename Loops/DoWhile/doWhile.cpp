#include <iostream>
using namespace std;

/*
    # In Do While Loop :
        * If the condition is false then it will execute at least one time.
        because in do while loop "first execute the code then it will check the condition."

    # Syntax

    do {
        *process*
        *code*
    } while(<condition>);
*/

int main() {
    int x = 1;
    // Finite Loop //
    do {
        cout << x << " ";
        x++;
    } while (x <= 10);

    cout << "\n";

    // Infinite Loop //

    // do {
    //     cout << x << " ";
    // } while (x <= 10);


    return 0;
}