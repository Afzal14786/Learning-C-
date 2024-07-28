#include <iostream>
using namespace std;
         // Formal Parameter's 
void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {

    cout << "Learning Call By Value In A Function.\n";
    int a = 10, b = 20;
    swap(a, b);
    cout << a << " " << b << endl;      // O/P - The Actual parameters will not change.
    return 0;
}