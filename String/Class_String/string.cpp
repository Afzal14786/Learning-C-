#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cout << "Enter Your Name : ";
    getline(cin, str);

    cout << "Hello Mr. " << str << endl;
    return 0;
}