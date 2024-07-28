#include <iostream>
#include <string.h>
using namespace std;

/*
    strchr(main, char) : it will find the occurence of a character and finding it's appearing in the main string
    strrchr(main,char) : it will find the occurence of a character and finding it's appearing from the right of side
                         of the main string.
*/
int main() {

    char main[] = "Programming";
    char occ = 'r';

    cout << strchr(main, occ) << endl;      // Output : mming
    cout << strrchr(main,occ) << endl;      // Output : ming
    return 0;
}