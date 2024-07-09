#include <iostream>
using namespace std;

int main() {

    /*
        When the value of any data type cross it's range, then it will automatic start from the begning .
    */
    char x = 127;
    ++x;
    cout << (int)x << endl;
    return 0;
}