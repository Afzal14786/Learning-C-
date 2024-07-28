#include <iostream>
using namespace std;

int countLength(char greet[30]) {
    int count = 0;
    for (int i = 0; greet[i] != '\0'; ++i) {
        count++;
    }
    return count;
}

int main() {

/*
        Length using loop.
    
    char greet[30] = "Welcome Sir, How Are You";
    cout << countLength(greet) << endl;     // Output :  24
*/

    /*
        Length of a given stirng using string function.
    */
    string name = "Md Afzal Ansari";
    cout << name.length() << endl;      // Output : 15
    return 0;
}