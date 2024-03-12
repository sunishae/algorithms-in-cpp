// number : 10818
// description : 1차원 배열에서 최대/최소값 찾기
// date : 2024.03.12

#include <iostream>

using namespace std;

int main(){

    int N;
    cin >> N;

    int *array = new int[N];
    for(int i =0; i < N; i++){
        cin >> array[i];
    }

    int min = array[0];
    int max = array[0];

    for(int i = 0; i < N; i++){
        if(array[i] < min)  min = array[i];
        if (array[i] > max)  max = array[i];
    }

    cout << min << " " << max << endl;

    delete [] array;

    return 0;
}