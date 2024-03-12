// number : 2562
// description : 최댓값과 그 인덱스 출력
// date : 2024.03.12

#include <iostream>

using namespace std;

int main(){

    int array[9];

    for(int i = 0; i < 9; i++){
        cin >> array[i];
    }

    int max = array[0];
    int idex = 1;
    for(int i = 1; i < 9; i++){
        if(array[i] > max){
            max = array[i];
            idex = i+1;
        }
    }

    cout << max << endl;
    cout << idex << endl;

    return 0;
}