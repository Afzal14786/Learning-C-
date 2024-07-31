#include <iostream>
using namespace std;

void fun() {

    /* Here the variable (var) is created inside the code section.*/
    static int var = 0;
    int a = 10;

    /* Same varibale is updated.*/
    var++;
    cout << a << " " << var;
    cout << endl;
}

int main() {

    /*
        Static variable is same as global variable but the difference is :
            -> Scope of the static varible is only inside the function only from where it's calling.
            -> And the memory of the static varible is allocated inside the code section.
            -> It will remain there till the program is executed.
            -> Static varibale is created only one time inside code section.
    */


    fun();
    fun();
    fun();
    return 0;
}