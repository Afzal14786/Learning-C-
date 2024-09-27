#include <iostream>
using namespace std;

// int name_conflict(int x, int y) {
//     return x + y;
// }

// float name_conflict(float x, float y) {
//     return x + y;
// }


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

    // float ans = name_conflict(23. 90);
    cout << name_conflict(23.986, 87.673) << endl;
    cout << name_conflict(12, 13) << endl;

        /*
        afzal@root:~/VSCodes/C++ By Abdul Sir/Functions$ g++ Overloading.cpp 
Overloading.cpp: In function ‘int main()’:
Overloading.cpp:44:26: error: call of overloaded ‘name_conflict(double, double)’ is ambiguous
   44 |     cout << name_conflict(23.986, 87.673) << endl;
      |             ~~~~~~~~~~~~~^~~~~~~~~~~~~~~~
Overloading.cpp:4:5: note: candidate: ‘int name_conflict(int, int)’
    4 | int name_conflict(int x, int y) {
      |     ^~~~~~~~~~~~~
Overloading.cpp:8:7: note: candidate: ‘float name_conflict(float, float)’
    8 | float name_conflict(float x, float y) {
      |       ^~~~~~~~~~~~~
    */

    cout << "Using 2 Parameters : " << res << endl;
    cout << "Using 3 Parameters : " << ans << endl;
    return 0;
}