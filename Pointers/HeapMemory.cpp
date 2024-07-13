#include <iostream>
using namespace std;

int main() {

    /*
    


    int arr[5] = {1,2,3,4,5};       // -> This array is created inside stack memory area.

    int *p;   // Pointer p is created inside stack memory area and it's pointing to array indirectly inside heap .

    p = new int[20];       // -> this array is creating inside heap memory area. //

    // 

    cout << sizeof arr << endl;
    cout << sizeof(p) << endl;

     */ 


    /*
        we can also modified the size of the array inside heap area.
        inside stack area it's not possible to modifiy the size of the array once it's declared .

        we can modify the size of the array usnig pointer .
        Example : 
    */  

    int *p = new int[5];    // Array size 5 inside heap memory //

    delete []p;     // deleting the existing array using delete keyword before creating new array size //
    p = new int[20];  // new array is created with size 20 inside heap memory . //

    return 0;
}