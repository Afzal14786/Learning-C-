#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main() {
    // char name[20];
    // cout << "Enter Your Name Dude : ";
    // cin.getline(name,50);

    char *s;
    cout << "Enter A String : ";
    cin >> s;


    cout << "The Length Of Your Name Is : " << strlen(s) << endl;
    return 0;
}
