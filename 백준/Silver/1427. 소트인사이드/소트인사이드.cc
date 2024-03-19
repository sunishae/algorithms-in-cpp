// number : 1427
// description : 소트인사이드
// date : 2024.03.19
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr;
    while(n>0){
        arr.push_back(n%10);
        n /= 10;
    }

    sort(arr.begin(), arr.end(), cmp);

    for(int i =0; i < arr.size(); i++){
        cout << arr[i];
    }

    return 0;
}