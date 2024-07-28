#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char s1[10] = "23456";
    char s2[10] = "123.768";

    long int x = strtol(s1,NULL,10);
    float y = strtof(s2, NULL);

    cout << "Value Of x : " << x << endl;   // Value Of x : 23456
    cout << "Value Of y : " << y << endl;   // Value Of y : 123.768
    return 0;
}