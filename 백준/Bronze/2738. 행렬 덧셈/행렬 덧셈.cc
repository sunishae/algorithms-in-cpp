// number : 2738
// description : 행렬 덧셈 
// date : 2024.03.14

#include <iostream>

using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    int A[row][col];
    int B[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> A[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> B[i][j];
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }

  return 0;
}