
/*Author:David Otieno
Reg No. BSCIT-05-0014/2024
Date 3/3/2025
version 1
*/


#include <iostream>

using namespace std;
int main() {
    // Two-dimensional matrix
    int matrix2D[2][3] = {{1, 2, 3},
                          {4, 5, 6}};
    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}