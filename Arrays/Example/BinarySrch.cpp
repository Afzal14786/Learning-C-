#include <iostream>
using namespace std;

int main() {
    int size, key;
    cout << "Enter The Size Of The Array : ";
    cin >> size;

    cout << "Enter The Elements Of The Array (Element Must Be Sorted.): ";
    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    cout << "Enter The Element You Want To Search : ";
    cin >> key;

    int start = 0, end = size-1;
    
    while (start <= end) {
        int mid = (start + end)/2;

        if (key == array[mid]) {
            cout << "The Element " << key << " Found At Index : " << mid << "\n";
            return 0;
        } else if (array[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    cout << "The Element " << key << " Not Found.\n";
    return 0;
}