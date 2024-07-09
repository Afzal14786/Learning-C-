#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter N : ";
    cin >> n;

    int i = 1, sum = 0;

    // using for loop //
    /*

    
        for (; i<= n; i++) {
            sum += i;
        }
        cout << "sum is : " << sum << "\n";

    */

    // using while loop //

    while (i <= n) {
        sum += i;
        i++;
    }

    cout << "sum is : " << sum << "\n";
    return 0;
}