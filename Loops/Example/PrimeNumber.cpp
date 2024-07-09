#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1, count = 0;

    for (; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        cout << "Entered number " << n << " is a prime number.\n";
    } else {
        cout << "Entered number " << n << " is not a prime number.\n";
    }
    return 0;
}