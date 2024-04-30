// number : 2579
// description : 계단 오르기
// date : 2024.04.30

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    int case1, case2;
    int dp[301];
    int arr[301];

    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];

    case1 = arr[3] + arr[1];
    case2 = arr[3] + arr[2];

    dp[3] = max(case1, case2);

    for(int i = 4; i <= n; i++){
        case1 = dp[i-3] + arr[i-1] + arr[i];
        case2 = dp[i-2] + arr[i];
        dp[i] = max(case1, case2);
    }

    cout << dp[n] << '\n';

    return 0;
}
