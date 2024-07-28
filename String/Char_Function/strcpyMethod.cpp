#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char name[] = "";
    char cpy[] = "Afzal";

    strcpy(name,cpy);
    cout << name << endl;

    strncpy(cpy, name, 3);
    cout << cpy << endl;
    return 0;
}