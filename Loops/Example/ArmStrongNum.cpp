#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;
    int m = n;
    int sum = 0, r;

    while (n > 0) {
        r = n%10;
        n = n/10;

        sum = sum + (r*r*r);
    }

    if (sum == m) {
        cout << "It's an armstrong number.\n";
    } else {
        cout << "It's not a armstrong number.\n";
    }
    return 0;
}