#include <iostream>
using namespace std;

int & fun(int &x) {
    return x;
}
int main() {

    int value = 10;
    cout << "Begore Function Calling The Value Of The Varibale Is : " << value << endl;
    fun(value) = 50;
    cout << "After Function Calling The Value Of The Varibale Become : " << value << endl;
    
    /*

        Output :
        ----------------------------------------------------------------
        Begore Function Calling The Value Of The Varibale Is : 10
        After Function Calling The Value Of The Varibale Become : 50
        ----------------------------------------------------------------
    */
    return 0;
}