#include <iostream>
using namespace std;

/*
    Question  :
        Write a program to offer discount on total bill amount.
*/
int main() {
    int amount, discount;

    cout << "Enter Your Amount : ";
    cin >> amount;

    if (amount >= 100 && amount < 500) {
        discount = (amount * 10)/100;
    } else if (amount >= 500) {
        discount = (amount * 20)/100;
    }

    cout << "Total Amount : " << amount << "\n";
    cout << "Discount Amount : " << discount << "\n";
    cout << "Final Amount : " << amount-discount << "\n";
}
