#include <iostream>
using namespace std;

/*
    # In pass by address, the actual parameters get afected .
*/
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int x = 10, y = 20;

    // Address of x and y accessed by the function parameters.
    cout << "Befor Function Calling The Values Of X & Y are : \n";
    cout << " x = " << x << " & y = " << y << endl;
    swap(&x, &y);
    cout << "After Function Calling The Values Of X & Y are : \n";
    cout << " x = " << x << " & y = " << y << endl;
    /*
        The Change is reflected in the main function .
        Output :
        ---------------
                Befor Function Calling The Values Of X & Y are : 
                x = 10 & y = 20
                After Function Calling The Values Of X & Y are : 
                x = 20 & y = 10
    */
    return 0;
}