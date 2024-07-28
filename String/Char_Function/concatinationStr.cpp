#include <iostream>
#include <string.h>
using namespace std;

int main() {
/*
    strcat(destination, source) :
        this function is use for concat 2 strings ans store it in the first string .
    strncat(destinatio, source,length) :
        this function is use for concat 2 string and we can also set the length of the characters,
        that how many characters we can concatinated.
*/
    // char fname[10];
    // char secondName[10];
    // cout << "Enter First Name : ";
    // cin.getline(fname,10);
    // cout << "Enter Last Name : ";
    // cin.getline(secondName,10);

    // cout << "Full Name Is : " << strcat(fname, secondName) << endl;

    char s1[] = "Hello";
    char s2[] = "Morning";

    strncat(s1,s2,6);
    cout << s1 << endl;
    return 0;
}