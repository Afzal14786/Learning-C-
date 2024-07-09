#include <iostream>
using namespace std;

int main() {

    float base, height, area;
    cout << "Enter Base Of The Triangle : \n";
    cin >> base;
    cout << "Enter Height Of The Triangle : \n";
    cin >> height;

    area = 0.5 * (base * height);
    cout << "The Area Of Triangle Is : " << area << "\n";


    return 0;
}