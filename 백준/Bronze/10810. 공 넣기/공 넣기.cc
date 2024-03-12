// number : 10810
// description : 공 넣고 각 바구니 값 출력
// date : 2024.03.12

#include <iostream>

using namespace std;

int main(){

    int N,M;
    cin >> N >> M;

    int *array{ new int[N]{}};
    
    for(int l=0; l<M; l++){
        int i,j,k;
        cin >> i >> j >> k;
        for(; i<=j; i++){
            array[i-1] = k;
        }
    }

    for(int l=0; l<N; l++){
        cout << array[l] << " ";
    }

    delete [] array;

    return 0;
}