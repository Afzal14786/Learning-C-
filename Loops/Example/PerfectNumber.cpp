#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1, sum = 0, perfectNum = 2*n;

    // using for loop //
    // for (; i<= n; i++) {
    //     if (n % i == 0) {
    //         sum += i;
    //     }
    // }

    // using while loop //

    while (i <= n) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }
    

    if (sum == perfectNum) {
        cout << "The Number " << n << " is a perfect number. \n";
    } else {
        cout << "The Number " << n << " is not a perfect number. \n";
    }
    return 0;
}