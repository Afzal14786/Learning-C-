#include <iostream>
#include <string.h>
using namespace std;
int main() {

    /*
        compare() -> this function compare two string's and return
            if first string is smaller than second then it will return -ve value
            if both the strings are equal than it will return 0
            and if first string is greater than second then it will return +ve value

            Example :
    */

    string str1 = "Apple";
    string str3 = "apple";
    string str2 = "Banana";
    cout << str1.compare(str2) << endl;     // Output : -1
    cout << str1.compare("Apple") << endl;  // Output : 0
    cout << str3.compare("Apple") << endl;  // Output : 5

    return 0;
}