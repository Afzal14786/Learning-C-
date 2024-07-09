#include <iostream>
using namespace std;

int main() {

    string name;
    cout << "May I Know Your Name : \n";
    getline(cin, name);
    cout << "Welcome Mr./Mrs. " << name << "\n";
    return 0;
}