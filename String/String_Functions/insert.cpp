#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string name = "Afzal";
    name.insert(0,"Md ");
    /*
        insert() -> function take two input,
            first : index value, from where the string is being inserted
            second : the value, what is going to be inserted from given index value.
    */
    cout << name << endl;   // Output : Md Afzal
    return 0;
}