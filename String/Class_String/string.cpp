#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cout << "Enter Your Name : ";
    getline(cin, str);

    cout << "Hello Mr. " << str << endl;

    cout << "Size Of Your Name is : " << str.size() << endl;
    cout << "Capacity Of Your name Is : " << str.capacity() << endl;
    cout << "Max Size Of Your Name Is : " << str.max_size() << endl;
    cout << "Append Your Surname in Your Name : " << str.append(" Ansari") << endl;

    string greet = "Hello";
    cout << greet.find_first_of('l') << endl;
    cout << greet.find_first_of('l') << endl;

    return 0;
}