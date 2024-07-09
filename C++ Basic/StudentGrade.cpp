#include <iostream>
using namespace std;

int main() {
    int m1,m2,m3,total;
    float avg;

    cout << "Enter The Marks." << endl;
    cin >> m1 >> m2 >> m3;
    total = m1 + m2 + m3;

    avg = total/3;

    if (avg >= 60) {
        cout << "Grade 'A'. " << endl;
    } else if (avg >= 35 && avg < 60) {
        cout << "Grade 'B'. " << endl;
    } else if (avg >= 30 && avg < 35) {
        cout << "Grade 'C'. " << endl;
    } else {
        cout << "Grade 'D'. Fail " << endl;
    }
}