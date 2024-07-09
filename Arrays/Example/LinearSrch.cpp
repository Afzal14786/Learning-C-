#include <iostream>
using namespace std;

int main() {
    int elem, size;
    cout << "Enter The Size Of The Array : ";
    cin >> size;

    int array[size];

    cout << "Enter The Element's Of The Array : ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Enter The Element You Want To Search : ";
    cin >> elem;
    for (int i = 0; i < size; i++) {
        if (elem == array[i]) {
            cout << "Element Fount At Index " << i << "\n";
            return 0;
        }
    }

    cout << "Not Found \n";
    return 0;
}