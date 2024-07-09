#include <iostream>
using namespace std;

int main() {
    int size = 7, sum = 0;
    int arr[] = {1,2,3,4,5,6,7};

    // using for each loop //
    // for (auto x : arr) {
    //     sum += x;
    // }

    // using for loop //
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout << sum << "\n";

    return 0;
}