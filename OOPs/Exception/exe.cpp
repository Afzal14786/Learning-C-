#include <iostream>
using namespace std;

class MyException {

};

class Derive : public MyException {

};

// int div (int x, int y) throw (MyException){
//     if (y == 0) {
//         throw MyException();
//     }

//     return x/y;
// }

int main() {
    int a = 10, b = 0, c;
    
    try {
        throw MyException();

    } catch(Derive e) {

    }catch(MyException e) {
        
    } catch (...) {
        cout << "All Catch Handler";
    }
    return 0;
}