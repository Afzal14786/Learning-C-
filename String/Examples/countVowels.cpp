#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str = "How Many Vowels";
    int vowel = 0, cons = 0, words = 1;

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowel++;
        } else if (str[i] == ' ') {
            words++;
        } else {
            cons++;
        }
    }

    cout << "No Of Vowels : " << vowel << endl;
    cout << "No Of Consonants : " << cons << endl;
    cout << "No Of Words : " << words << endl;

    return 0;
}