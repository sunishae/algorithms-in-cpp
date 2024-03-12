// number : 10807
// description : 개수 세기
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

    int target;
    cin >> target;

    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(array[i] == target)
            cnt++;
    }

    cout << cnt << endl;
    delete [] array;

    return 0;
}