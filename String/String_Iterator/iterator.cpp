#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string name = "MD AFZAL ANSARI";

    // Forwarnd Iteration //
    /*
        output : M d   A f z a l   A n s a r i 
    */
    string::iterator i;
    // for (i = name.begin(); i!= name.end(); ++i) {
    //     cout << *i;
    // }

    // cout << endl;
    string::reverse_iterator ri;
    /*
        Output : i r a s n A   l a z f A   d M 
    */
    // Backward Or Reverse Iterator //

    // for (ri = name.rbegin(); ri != name.rend(); ++ri) {
    //     cout << *ri;
    // }

    // cout << endl;
    // Convert All The String Into Upper Case //

    string::iterator uppercase;

    // for (uppercase = name.begin(); uppercase != name.end(); ++uppercase) {
    //     *uppercase = *uppercase - 32;
    // }
    // cout << name;
    cout << endl;

    /*
        Convert All the string into the lower case //
    */
    string::iterator lower;
    for (lower = name.begin(); lower != name.end(); ++lower) {
        *lower = *lower + 32;
    }
    cout << name;
    cout << endl;
    return 0;
}