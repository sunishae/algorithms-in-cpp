// number : 1003
// description : 피보나치 함수
// date : 2024.04.11

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int dp[41] = {0,1,1};
    for(int i=3; i<41; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    int n;
    while(t--){
        cin >> n;
        if(n == 0){
            cout << 1 << ' ' << 0 << '\n';
        }
        else if(n == 1){
            cout << 0 << ' ' << 1 << '\n';
        }
        else{
            cout << dp[n-1] << ' ' << dp[n] << '\n';
        }
    }


    return 0;
}
