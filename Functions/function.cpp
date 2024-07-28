#include <iostream>
using namespace std;

void display() {
    cout << "Writing Function in C++.\n";
}

int add (int x, int y) {
    int z = x + y;
    return z;
}

int main() {

    /*Display function call here */
    display();
    int a = 10, b = 20, z = 0;
    z = add (a, b);
    /* add function call here */
    cout << "The Addition Is : " << z << endl;
    return 0;
}