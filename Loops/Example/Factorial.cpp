#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;

    unsigned int i = 1, fact = 1;

    // using for loop //
    for (; i <= n; i++) {
        fact *= i;
    }

    // using while loop //

    // while (i <= n) {
    //     fact *= i;
    //     i++;
    // }

    cout << "Factorial Is : " << fact << "\n";
    return 0;
}