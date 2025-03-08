#include <iostream>
using namespace std;
/* NAME : EMMANUEL BARAKA
REG : BSCIT-05-0113/2024
*/    

int main() {
    // 1D Matrix (Array)
    int matrix1D[5] = {1, 2, 3, 4, 5};
    
    // 2D Matrix (Array)
    int matrix2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 3D Matrix (Array)
    int matrix3D[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    // Printing 1D Matrix
    cout << "1D Matrix:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << matrix1D[i] << " ";
    }
    cout << endl << endl;

    // Printing 2D Matrix
    cout << "2D Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix2D[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Printing 3D Matrix
    cout << "3D Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "matrix3D[" << i << "][" << j << "][" << k << "] = " << matrix3D[i][j][k] << endl;
            }
        }
    }

    return 0;
}
