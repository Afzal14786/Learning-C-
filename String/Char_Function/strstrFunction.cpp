#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main() {

    char main[20] = "Programming";
    char sub[20] = "Gram";

    cout << strstr(main, sub) << endl;
    return 0;
}