#include <iostream>
using namespace std;


int * fun(int size) {
    int *ptr = new int[size];
    for (int i = 0; i < size; ++i) {
        ptr[i] = size * i;
    }

    return ptr;
}
int main() {

    int size = 10;
    int *ans = fun(size);

    for (int i = 0; i < size; ++i) {
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;

    /*
        # In return by address, the function will return the address of a variable, or the values are display or accessed by the address .

        Output :
        ---------------------
                0 10 20 30 40 50 60 70 80 90 
    */
}