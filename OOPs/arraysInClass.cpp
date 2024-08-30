#include <iostream>
using namespace std;

class Array {
    private:
        int *arr;
        int size;
        int len;

    public:
        Array() {
            size = 10;
            len = 10;
            arr = new int[size];
        }

        Array(int size) {
            this->size = size;
            len = 0;
            arr = new int[size];
        }

        void display();
        void inputArray();
};

int main() {
    
    Array *arr;
    arr = new Array(10);
    arr->inputArray();
    arr->display();
    return 0;
}

void Array::display()
{   
    cout << "Here is the elements inside the array : \n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Array::inputArray()
{   
    cout << "Enter the elemnet's inside array : ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}
