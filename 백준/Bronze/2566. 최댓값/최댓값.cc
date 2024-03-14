// number : 2566
// description : 행렬 최대값 구하기 
// date : 2024.03.14

#include <iostream>

using namespace std;

int main() {

    int matrix[9][9];
    int max = -1;

    int row,col;

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> matrix[i][j];

            if(matrix[i][j] > max){
                max = matrix[i][j];
                row = i;
                col = j;
            }
        }
    }

    cout << max << endl;
    cout << row + 1 << " " << col + 1;

  return 0;
}