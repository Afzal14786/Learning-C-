#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 1, sum = 0;

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
    
    cout << "Sum Of Factor's Is : "<< sum << "\n";
    return 0;
}