#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char s1[20] = "x=10;y=20;z=35";
    char *tokan = strtok(s1, ";");

    while (tokan != NULL) {
        cout << tokan << endl;
        tokan = strtok(NULL, ";");
    }
    return 0;
}