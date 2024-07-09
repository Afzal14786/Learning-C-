#include <iostream>
using namespace std;

int main() {

    int x = 10, y = 5, z;
    z = x & y;
    cout << "And Operator(&) : " << z << endl;
    z = x | y;
    cout << "Or Operator (|) : " << z << endl;
    x = ~x;
    cout << "Not Operator (~) : " << x << endl;

    return 0;
}