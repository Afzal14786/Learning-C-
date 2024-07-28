#include <iostream>
using namespace std;

int main() {

    string name = "Afzal";
    name.replace(1,3,"Ansari");  // Here from index value 1 to 3 characters are replaced by Ansari.
    cout << name << endl;  // Output : AAnsaril
    return 0;
}