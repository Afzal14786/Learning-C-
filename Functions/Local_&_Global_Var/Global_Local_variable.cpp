#include <iostream>
using namespace std;

/* Global Variable */
/*
    -> It is accessible by all the function inside the program.
    -> It is created inside the code section and it will remain in the memory till the program is executed.
*/
int glob = 0;

void fun() {
    /* Local Variable To function. */
    /*
        -> It is accessible only inside the function.
        -> It is created inside the stack memory section and it will remain in the memory till the function executing.
    */
    int x = 10;
    glob += x;
    cout << glob << endl;
}

int main() {

    glob = 15;
    fun();
    glob++;

    cout << glob << endl;
    return 0;
}