#include <iostream>
using namespace std;

int main() {

    int number, firstSum;
    cout << "Enter The Number : \n";
    cin >> number;

    firstSum = number * (number+1) / 2;
    cout << "Sum Of First " << number << " Natural Number's Is : " << firstSum << "\n";
    
    return 0;
}