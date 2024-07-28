#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char name[10] = "afzal";
    char name2[10] = "AFZAL";
    // lower to UPPER //
    for (int i = 0; name[i] != '\0'; ++i) {
        name[i] -= 32;
    }
    cout << name << endl;

    // UPPER to lower //
    for (int i = 0; name2[i] != '\0'; ++i) {
        name2[i] += 32;
    }
    cout << name2 << endl;

    // using string iterator : lower to UPPER 
    string str = "hello afzal";
    string::iterator i;
    for (i = str.begin(); i != str.end(); ++i) {
        *i -= 32;
    }
    cout << str << endl;

    // using iterator : UPPER to lower
    string::iterator upp;
    string str2 = "HELLO AFZAL";
    for (upp = str2.begin(); upp != str2.end(); ++upp) {
        *upp += 32;
    }
    cout << str2 << endl;

    string str3 = "WelCome";
    for (int i = 0; str3[i] != '\0'; ++i) {
        if (str3[i] >= 65 && str3[i] <= 90) {
            str3[i] += 32;
        }
    }
    cout << str3 << endl;
    return 0;

}