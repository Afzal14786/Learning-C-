#include <iostream>
using namespace std;

int division(int x, int y) {
    if (y == 0) {
        throw 1;
    } else {
        return x/y;
    }
}

int main() {
    int x = 10, y = 0, ans;
    try {
        ans = division(x, y);
        cout << "The Answer Is : " << ans << endl;
    } catch (int e) {
        cout << "Cannot Divided / 0. Error Code is : " << e << endl;
    }
    return 0;
}