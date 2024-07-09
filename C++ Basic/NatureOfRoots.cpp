#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float a,b,c,d,root1,root2;
    cout << "Enter The Cosifiants (a, b and c)" << endl;
    cin >> a >> b >> c;

    d = sqrt(pow(b,2) - 4 * a * c);

    root1 = (-b + d)/(2*a);
    root2 = (-b - d)/(2*a);

    if (d == 0) {
        cout << "Roots Are Real And Equal."<< endl;
        cout << "The Roots Are (" << root1 <<","<<root2 <<")"<<endl;
    } else if (d > 0) {
        cout << "Roots Are Real But Unequal." << endl;
        cout << "The Roots Are (" << root1 << "," << root2 << ")" << endl;
    } else {
        cout << "Roots Are Imaginary." << endl;
        cout << "The Roots Are (" << root1 << "," << root2 << ")" << endl;
    }
    return 0;
}