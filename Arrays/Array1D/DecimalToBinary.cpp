#include <iostream>
using namespace std;


void decimalToBinary(int decimal) {

    if (decimal == 0) {
        cout << "Equivelant Binary : 0\n";
        return;
    }

    int binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i] = decimal%2;
        decimal /= 2;
        ++i;
    }

    cout << "Binary Equivelent is : ";
    for (int j = i-1; j >=0; --j) {
        cout << binary[j];
    }
    cout << endl;
}

int main() {

    int decimal;
    cout << "Enter a Decimal Number : ";
    cin >> decimal;

    decimalToBinary(decimal);
    return 0;
}