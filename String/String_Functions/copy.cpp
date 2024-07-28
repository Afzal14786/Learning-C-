#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string myName = "Md Afzal Ansari";
    char your_name[50];

    myName.copy(your_name, myName.length());

    /*
        copy() -> this function will take two argument,
            first, in which variable the string is going to copy
            second, what is the length, means how many latter's or characters are going to copy from str1 to str2
    */

    /*
        Name is copied into your_name from myName.
    */
    cout << your_name << endl;
    
    return 0;
}