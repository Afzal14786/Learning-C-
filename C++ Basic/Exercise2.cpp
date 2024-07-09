#include <iostream>
using namespace std;

/*
    Question :
        input a number in the form of year (eg : 2012) and check is it leap year or not ?
*/

int main() {
    int year;
    cout << "Enter Year : ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " Is A Leap Year.\n";
            } else {
                cout << year << " Is Not A Leap Year. \n";
            }
        } else {
            cout << year << " Is A Leap Year.\n";
        }
    } else {
        cout << year << " Is Not A Leap Year. \n";
    }
    return 0;
}