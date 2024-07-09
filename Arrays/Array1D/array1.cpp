#include <iostream>
#include <math.h>
using namespace std;

// List of same data type under one single variable.
/*
    Types of array :
        * all must be same data type. *
        * Initialization and Decleration of array. *
        ----------------------------------------------

        1. int arr[] = {1,2,3,4,5};                           -> Integer type array .
        2. char ch[] = {'A','F','Z','A','L'};                 -> Character data type array
        3. float marks[] = {12.6, 98.98,65.76, 98.54};        -> Float data type array.

        * int arr[5];       // Initialization //   
*/
int main() {

    int array[] = {1,2,3,4,5};
    float marks[] = {12.6, 98.98,65.76, 98.54, 87.98};
    char ch[] = {'A',70,'Z','A','L'};

    // Accessing All The Element's using for-each loop //
    // for-each loop was introduce c++ in version 11. 
    for (auto x : array) {
        cout << x << ", ";      // auto is a keyword which can automatic check the data type .
                                // It's a very useful. 
    }
    cout << "\n";

    for (auto x : marks) {
        cout << x << ", ";
    }

    cout << "\n";
    for (auto x : ch) {
        cout << x << ", ";
    }

    cout << "\n";
    return 0;
}