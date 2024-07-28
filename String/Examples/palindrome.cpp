#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string name = "MADAM";
    string rev = "";

    int len = (int)name.length();
    rev.resize(len);
    
    for (int i = 0, j = len-1; i < len; ++i, --j) {
        rev[i] = name[j];
    }

    rev[len] = '\0';

    if (rev.compare(name) == 0) {
        cout << "It's A Palindrome\n";
    } else {
        cout << "It's not a Palindrome.\n";
    }

    return 0;
}