// number : 9461
// description : 파도반 수열
// date : 2024.05.02

#include <iostream>
using namespace std;

long long dp[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2; 
    dp[6] = 3; 

    while(t--){
        int n;
        cin >> n;

        for(int i = 7; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-5];
        }

        cout << dp[n] << "\n";

    }

    return 0;
}