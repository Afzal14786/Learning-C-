#include <iostream>
using namespace std;

int main() {

    int array[] = {1,2,3,4,5};
    float marks[] = {12.6, 98.98,65.76, 98.54, 87.98};
    char ch[] = {'A','F','Z','A','L'};

    // Accessing All The Element's using for-each loop //
    // for-each loop was introduce c++ in version 11. 
    for (int x : array) {
        cout << x << ", ";
    }
    cout << "\n";

    for (float x : marks) {
        cout << x << ", ";
    }

    cout << "\n";
    for (char x : ch) {
        cout << x << ", ";
    }

    cout << "\n";
    return 0;
}