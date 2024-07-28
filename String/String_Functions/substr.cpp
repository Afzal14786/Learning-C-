#include <iostream>
#include <string.h>
using namespace std;

int main() {

    /*
        substr() -> this function will take one or two, both no of arguments
            if we pass only one argument than it will return the string from the given value to till the end of the string.
            And if we pass two argument than first value will be the index value from where the string get subtract and the second argument is how many latters or characters are going to be subtract.
    */
    string program = "Programming";
    string res = program.substr(3);
    cout << res << endl;                // Output : gramming

    string res2 = program.substr(3,4);
    cout << res2 << endl;               // Output : gram
    return 0;
}