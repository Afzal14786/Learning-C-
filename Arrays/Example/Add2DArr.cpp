# include<iostream>
using namespace std;
    
/*
    program for matrix operations 2d array
    * For adding two matrix :
        no fo row's and columns must be same .

*/
int main()
{
    int row, cols;

    cout << "Enter The No Of Row And Cols : ";
    cin >> row >> cols;

    int matrix1[row][cols];
    int matrix2[row][cols];
    int ansMatrix[row][cols];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    // sum //
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            ansMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // 
    cout << "Resultend Matrix : \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cout << ansMatrix[i][j] << " ";
        }
        cout << "\n";
    }

	return 0;
}