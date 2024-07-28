#include <iostream>
using namespace std;
/*
    String is nothig but the collection of characters or letters .
*/
int main() {
/*
    Decleration and Initialization String Using Character Array .
    '\0' -> Is nothing but string delimiter and null character
                                                Inside Memory
                                        ---------------------------------
    char x 'A';                                 [A]  -> 1 Byte memory occupy
    char S[10] = "Hello";                       [H|e|l|l|o|\0| | | |]    Occpy only 5 bytes but the capacity is 10
    char S[] = "Hello";                         [H|e|l|l|o|\0|]      Occpy only till the length of the string
    char S[] = {'H','e','l','l','o','\0'};      [H|e|l|l|o|\0|]      Occpy only till the length of the string
    char S[] = {65,66,67,68,69,'\0'};           [|A|B|C|D|E|\0]      we can also use ASCII Code Instead Of character
    char *S = "Hello";                          [H|e|l|l|o|\0|]      Occpy only till the length of the string using pointer
*/    
    // char S[] = {65,66,67,68,69,0};
    char *S = "Hello";      // Giving warning because latest version of C++ dont allow to use pointer in string.
    cout << S << endl;


    return 0;
}