#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string name = "Md Afzal Ansari";
    /*
        find() -> it will take 1 argument as string or character as well as and return the occurence 
        of the character or the passed string.

        rfind() -> Also Take one argument and check the occurence from the right of the string.
    */
    cout << name.find("Afzal") << endl;             // Output : 3
    cout << name.find('d') << endl;                 // output : 1
    cout << name.rfind('a') << endl;                // Output : 12
    cout << name.find_first_of('a') << endl;        // Output : 6
    cout << name.find_last_of('a') << endl;         // Output : 12
    cout << name.find_first_not_of('a') << endl;    // Output : 0
    cout << name.find_last_not_of('a') << endl;     // Output : 14
    
    return 0;
}