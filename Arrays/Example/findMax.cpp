#include <iostream>
using namespace std;

int main() {

    int array[] = {1,26,8,95,9,10,87,43};
    int max = array[0];
    for (auto x : array) {
        if (x > max) {
            max = x;
        }
    }

    cout << "Maximum Element In The Array Is : " << max << "\n";
    return 0;
}