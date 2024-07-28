#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int add(int x, int y, int z) {
    return x + y + z;
}

float add (float x, float y) {
    return x + y;
}

float add (float x, float y, float z) {
    return x + y + z;
}

int main() {

    int a = 10, b = 20, c, d;
    c = add(a, b);
    d = add(a, b, c);
    cout << "Using 2 Parameters : " << c << endl;
    cout << "Using 3 Parameters : " << d << endl;

    // Float //
    
    float x = 10.5f, y = 12.67f;
    float res =  add(x, y);
    float ans = add(x, y, res);

    cout << "Using 2 Parameters : " << res << endl;
    cout << "Using 3 Parameters : " << ans << endl;
    return 0;
}