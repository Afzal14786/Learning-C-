#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string myName = "Md Afzal Ansari";
    myName.erase();

    /*
        erase() -> this function will erase all the data of a string object means
        it will remove all the characters or latter from a given string.
    */
    cout << myName << endl;     // Output : Nothing 
    return 0;
}