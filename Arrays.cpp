#include <iostream>
using namespace std;
/* 
NAME : EMMANUEL BARAKA
REG : BSCIT-05-0113/2024
*/

int main() {
    // 2x2 Matrix
    int mat2x2[2][2] = {
        {1, 2},
        {3, 4}
    };
    
    // 2x3 Matrix
    int mat2x3[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 3x2 Matrix
    int mat3x2[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // 2x4 Matrix
    int mat2x4[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };

    // Printing 2x2 Matrix
    cout << "2x2 Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat2x2[i][j] << " ";
        }
        cout << endl;
    }

    // Printing 2x3 Matrix
    cout << "\n2x3 Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat2x3[i][j] << " ";
        }
        cout << endl;
    }

    // Printing 3x2 Matrix
    cout << "\n3x2 Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mat3x2[i][j] << " ";
        }
        cout << endl;
    }

    // Printing 2x4 Matrix
    cout << "\n2x4 Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat2x4[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

