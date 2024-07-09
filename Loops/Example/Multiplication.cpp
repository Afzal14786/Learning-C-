#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter n : ";
    cin >> n;
    // int i = 1;

    // Using while loo //
    /*
    
    while (i <= 10) {
        int res = i * n;
        cout << n << " * " << i << " = " << res << "\n";
        i++;
    }
    */

   /*
    using for loop
   */
    
    for (int i = 1; i<=10; i++) {
        int res = i * n;
        cout << n << " * " << i << " = " << res << "\n";
    }
    return 0;
}