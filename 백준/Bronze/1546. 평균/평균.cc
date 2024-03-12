// number : 1546
// description : 평균 조작하기
// date : 2024.03.12

#include <iostream>

using namespace std;

int main(){

    int N;
    cin >> N;

    double *array = new double[N];
    double max = 0;
    for(int i = 0; i < N; i++){
        cin >> array[i];
        if(array[i] > max){
            max = array[i];
        }
    }
    
    double sum = 0.0;
    for(int i = 0; i < N; i++){
        array[i] = array[i] / max * 100;
        sum += array[i];
    }
    
    double avg = sum / N;
    cout << avg << endl;

    return 0;
}
