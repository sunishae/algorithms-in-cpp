// number : 9506
// description : 약수들의 합
// date : 2024.03.16

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }


    int sum = 0;
    for(int i=0; i<N; i++){
        int cnt = 0;
        for(int j = 1; j <= V[i]; j++){
            if(V[i] % j == 0){
                cnt++;
            }
        }
        if(cnt == 2) sum++;
    }

    cout << sum << '\n';

    return 0;
}