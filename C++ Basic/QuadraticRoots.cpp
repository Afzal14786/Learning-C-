#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c, root1, root2;
    cout << "Enter The Coficients : \n";
    cin >> a >> b >> c;

    root1 = (-b + sqrt(pow(b,2)-4*a*c)) / (2*a);
    root2 = (-b - sqrt(pow(b,2)-4*a*c)) / (2*a);

    cout << "The Roots Are : (" << root1 <<"," << root2 <<") \n";
    
    return 0;
}