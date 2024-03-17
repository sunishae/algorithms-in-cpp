// number : 2798
// description : 블랙잭
// date : 2024.03.18

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;

    vector<int> bj(n);
    for(int i=0; i<n; i++)
        cin >> bj[i];

    sort(bj.begin(), bj.end());
    
    int i,j,k;

    int result = 0;
    for(i = n-1; i >= 2; i--){
        for(j = i-1; j >= 1; j--){
            for(k = j-1; k >=0; k--){
                if(bj[i] + bj[j] + bj[k] <= m){
                    result = max(result, bj[i] + bj[j] + bj[k]);
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}