#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string fname = "Hello";
    string lname = "World";
    fname.swap(lname);
    /*
        swap() -> here the passed argument is copied to the first variable and now first variable become World From Hello.
    */
    cout << fname << endl;      // Output : World
    return 0;
}