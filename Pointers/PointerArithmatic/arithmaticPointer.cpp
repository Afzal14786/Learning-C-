#include <iostream>
using namespace std;

int main() {

    /*
        Only 5 Operations are possible on pointer's :

        Operation :
        Explanation & Example :


            1. p++;   
                    Increment the pointer by one data type size;
                    example : integer take 4 byte and pointer p points (1000).
                    then p++; points (1004);

            2. p--;     
                    It will decrement the pointer value by one data type size;
                    example : integer take 4 byte and pointer p points (1004).
                    then p--; points (1000);

            3. p = p + 2;
                    It will increase the pointer on forward by two value. Means
                    if pointer points 1000 then it will point 1008 after performing the operation .

            4. p = p - 2;
                    It will same as above one, but it's decrement by backward instead of increment forward .
                    if pointer points 1008 then it will point 1000 after performing the operation .

            5. d = (q - p)/2;
                    Here d is a variable and p and q both are the pointers .
                    It will inform us that how one pointer is far away from another pointer .
                    if 'd' is -ve, it means that pointer 'p' is far away from 'q' is nearest .
                    and if d is '+ve', it means that pointer 'q' is far away and 'p' is nearest .

                    and here '2' is the size of the date type . If integer take 4 bytes then it become 4 not 2.
                    Example :

                    p = 1000 and q = 1012;
                    d = (q - p)/2; = (1012 - 1000)/4 => 3;
                    Here d is positive means that pointer q is 3 element away from pointer p.
                    if :
                        d = (p - q) / 4;
                        d = (1000 - 1012) /4;
                        d = (-12)/4;  => -3;
                        Now it means that pointer 'p' is 3 element back from the pointer 'q'.
    */

    int A[] = {1,2,3,4,5};
    int *p = A;     // Here pointer point the first value of the array .
    int *q = &A[4];
/*

    p++;    // but after this operation pointer points the second value of the arraye means : 2.
    cout << *p<< endl;      // Output : 2 //

    p = p + 2;      // it will points the 4th value of the array means : 4
    cout << *p << endl; // Output : 4

    p--;    // Now it will points the 3rd value of the array because it will decrease by 1 integer size value //
    cout << *p << endl; // Output : 3

    p = p - 2;  // Now it will point the first value of the array because it will decrease by 2 value so it become 1.
    cout << *p << endl; // Output : 1

*/

    int d = (q-p);    // here integer take 4 byte //
    cout << d << endl;

/*

    cout << p << endl;
    for (int i = 0; i < 5; i++) {
        // cout << A[i] << " ";
        // cout << i[A] << " ";
        // cout << *(A+i) << " ";      // It will give the data //
        // cout << A+i << " ";         // it will give the address of the data //
        // cout << p+i << " ";         // it will also give the address of the data //
        // cout << p[i] << " ";        // It will also give the data //
        // cout << *(p+i) << " ";      // It will also give the data //

        cout << *p << " ";             // It will also give the data //
        p++;
    }
    cout << endl;
    cout << p << endl;      // After the last index the pointer moves to another address //
*/












    return 0;
}