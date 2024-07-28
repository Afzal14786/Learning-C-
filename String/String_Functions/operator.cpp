#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string name = "Md Afzal";
    string lname = " Ansari";
    string concat = name + lname;
    // cout << "Full Name Using (+) Operator : " << concat << endl;
    /*
        Output : Full Name Using (+) Operator : Md Afzal Ansari
    */

    name = lname;
    /*
        here last name is assign to name
        so name become : "Ansari", 
    */
    cout << name << endl;
    return 0;
}
/*
    Operator's : 
        +, =, []
        + -> it is use for concat two string.
        = -> it is use for assiging the value of right hand variable to the left hand variable.
        [] -> this is use in loop for accessing the values.
*/