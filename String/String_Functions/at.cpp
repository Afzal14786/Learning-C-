#include <iostream>
#include <string.h>
using namespace std;

int main() {

    string name = "Md Afzal Ansari";
    /*
        print all the value using string function "at()";
    */
   int i = 0;
   while (name[i] != '\0') {
        cout << name.at(i) << " ";
        i++;
   }
    
   cout << endl;
    return 0;
}