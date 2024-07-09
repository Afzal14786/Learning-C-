#include <iostream>
using namespace std;

/*
    Switch case are mostly use in menu driven classes .
*/
int main() {

    cout << "Menu\n";
    cout << "1. Add\n"<< "2. Sub\n" << "3. Mul\n" << "4. Div\n";

    int option;
    cout << "Enter Your Choice : ";
    cin >> option;

    int a, b, ans;
    cout << "Enter 2 Number's : ";
    cin >> a >> b;

    switch (option) {
        case 1:
            ans = a + b;
            cout << "Addition Is : " << ans << "\n";
            break;

        case 2:
            ans = a - b;
            cout << "Subtraction Is : " << ans << "\n";
            break;

        case 3:
            ans = a * b;
            cout << "Multiply Is : " << ans << "\n";
            break;

        case 4:
            ans = a / b;
            cout << "Division Is : " << ans << "\n";
            break;

        default :
            cout << "Sahi Number Dalo Yr\n";
            break;
    }
    return 0;
}