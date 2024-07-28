#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string email = "mdafzal14777@gmail.com";
    int idx = email.find('@');
    string userName = email.substr(0, idx);
    cout << "Your Username Is : " << userName << endl;
    return 0;
}