#include <iostream>
using namespace std;

class Student {
    private:
        int roll_no;
    
    public:
        static int addmission_no;
        Student() {
            addmission_no++;
            roll_no = addmission_no;
        }

        int getRollNo() {
            return roll_no;
        }
};

int Student::addmission_no = 0;

int main() {
    Student s1, s2;
    cout << "Roll No Of Student 1 Is : " << s1.getRollNo() << endl;
    cout << "Roll No Of Student 2 Is : " << s2.getRollNo() << endl;
    return 0;
}