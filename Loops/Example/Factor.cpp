#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1;
    cout << "The Factor's Are :\n";

    // using for loop //
    // for (; i<= n; i++) {
    //     if (n % i == 0) {
    //         cout << i << ", ";
    //     }
    // }

    // using while loop //

    while (i <= n) {
        if (n % i == 0) {
            cout << i << ", ";
            i++;
        }
    }
    cout << "\n";
    return 0;
}