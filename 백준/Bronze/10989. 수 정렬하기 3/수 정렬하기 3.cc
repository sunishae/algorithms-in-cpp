// number : 10989
// description : 수 정렬3
// date : 2024.03.19
#include <iostream>
using namespace std;


int main(){
    int arr[10001] = {0,};
    int n;
    scanf("%d", &n);

    int tmp;
    for(int i = 0; i < n; i++){
        scanf("%d", &tmp);
        arr[tmp]++;
    }

    for(int i = 1; i <= 10000; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << i << '\n';
        }
    }

    return 0;
}