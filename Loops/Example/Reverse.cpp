#include <iostream>
using namespace std;
int main () {

    int n,r, orignal;
    int reverse = 0;
    cout << "Enter n : ";
    cin >> n;
    orignal = n;

    while (n > 0) {
        r = n % 10;
        n = n / 10;

        reverse = reverse * 10 + r;
    }

    cout << "Orignal Number : " << orignal << " & Reverse Number Is : " << reverse << "\n";
    return 0;
}