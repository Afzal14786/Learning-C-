#include <iostream>
using namespace std;


// 4. We can also make the methods as constact so it cannot make any changes inside the methods.

class Demo {
    private:    
        int age = 10;
        int salary = 9076;

    public:
        void display1() {
            age++;
            cout << age << ", " << salary << endl;
        }

        void display2() const {
            age++; // in this line error occur because we make this method as constant
            cout << age << ", " << salary << endl;
        }
};


int add(const int &x, int y) {
    x++;    // this line through error.
    return x + y;
}

int add2(int &x, int &y) {
    x++;
    return x + y;
}

int main() {

    int value = 20;

    // Constant identifier .
    const int x = 20;

// 1.
    // here x cannot be increment or make any changes.
    // x++;
    // cout << x << endl;

    // Pointer to a constant.

// 2.
    int y = 10;
    // const int *ptr = &value;
    // ++ (*ptr); // not allow, we cannot or increment the value because it is constact.
    // allowed here because the pointer pointes to another varibale .
  //  ptr = &y;   // in this line pointer points to another variable 'y' and make that variable constant.

//    cout << x << " " << y << endl;

// 3. Make the pointer constant so it cannot points to another variable .

 //   int * const ptr = &value;

    // cout << (*ptr) << endl;

    // here modify is not allow because the pointer is constant now.
 //   ptr = &y;
   // cout << (*ptr) << endl;


//  Function Calling For Demo ..

    // Demo d;
    // d.display1();
    // d.display2();  // Here is problem baby, we cannot change it anymore because it is constant.


    // We can also make the arguments or parameters as constant.

    int a = 10, b = 20;

    cout << add(a, b) << endl;
    cout << add2(a, b) << endl;


// Make both the pointer as well as data as constant //

    int val1 = 10, val2 = 60;
    const int * const ptr = &val1;   // Here pointer and val1, both are constant .
    ptr = &val2;    // here is error. 
    return 0;
}