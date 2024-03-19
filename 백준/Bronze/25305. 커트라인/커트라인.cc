// number : 25305
// description : 커트라인
// date : 2024.03.19

#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int n,k;
    cin >> n >> k;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout << arr[n - k] << endl;

    return 0;
}
