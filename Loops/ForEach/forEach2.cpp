#include <iostream>
using namespace std;

int main() {

    /*
        for-each loop is used for collection of elements (Arrays and STL).
            ->
            using for loop :
                int array[] = {1,2,3,4,5,6};

                for (int i = 0; i < 6; i++) {
                    cout << array[i];
                }

                -> Here 'i' is worked as counter, which increaces by 1 and access the upcoming element.
                -> 'i' is taking the index value of the array and print the respective element .

            samething using for-each loop :
                syntax :
                    for (int x : array) {
                        cout << x ;
                    }
                
        -> read as -> for each x in array.
        -> here 'x' is an element itself, and the value is copied from the array.
        -> In for loop we have to mention the size of the array but in for-each it's not mendetory to use array size.
        -> In above for-each loop x is a temp value, if we modified the value of x, then the value will not change
            inside the array value.

        -> using 'auto' keyword instead of defining another variable in for-each loop, more powerful
            feature in c++;

            syntax :

            for (auto : array) {
                cout << x ;
            }

    */

    return 0;
}