#include <iostream>
using namespace std;

int main() {
    int n = 12796, r;
    while (n > 0) {
        r = n % 10;
        n = n/10;

        cout << r << " ";
    }
    cout << "\n";
    return 0;
}