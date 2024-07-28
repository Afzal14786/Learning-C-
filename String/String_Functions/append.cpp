#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string fname = "Md Afzal";
    string lname = " Ansari";
    string fullName = fname.append(lname);
    cout << "Hello Mr. " << fullName <<" .\n";
    /*
        Output :
            Hello Mr. Md Afzal Ansari .
    */
    return 0;
}