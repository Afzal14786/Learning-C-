#include <iostream>
using namespace std;

template <class T>
T add(T x, T y) {
    return x + y;
}


int main() {

    cout  << "Passing Integer Data Type On Same Function : " << add(12, 20) << endl;
    cout << "Passing Integer Data Type On Same Function : "<< add (12.56f, 76.987f) << endl;
    return 0;
}