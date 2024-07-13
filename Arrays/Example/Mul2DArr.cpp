#include <iostream>
using namespace std;

int main() {
    int row1,col1, row2, col2;

    cout << "Enter The No Of Row And Column Of First Matrix : ";
    cin >> row1 >> col1;

    cout << "Enter The No Of Row And Column Of Second Matrix : ";
    cin >> row2 >> col2;

        // checking condition //
    if (col1 != row2) {
        cout << "Error : Multyply Can't Be Done . Because No Of Columne Is Matrix 1 Not Equal To No Of Row In Matrix 2.\n";
        break;
    }
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int ansMatrix[row1][col2];


    cout << "Enter The Element Of Matrix 1 : ";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter The Element Of Matrix 2 : ";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Multiplication Process //
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            ansMatrix[i][j] = 0;
            for (int k = 0; k < col1; ++k) {
                ansMatrix[i][j] += matrix1[i][k] + matrix2[k][j];
            }
        }
    }

    // Print The Resultend Matrix //
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << " " << ansMatrix[i][j];
            // if(j == col2-1)
            //     cout << endl;
        }
        cout << endl;
    }

    return 0;
}