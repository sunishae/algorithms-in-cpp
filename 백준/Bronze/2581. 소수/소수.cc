// number : 9506
// description : 약수들의 합
// date : 2024.03.16

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M;
    cin >> M;
    int N;
    cin >> N;

    int dif = N-M+1;
    int min = 10000;
    int sum = 0;

    for(int i=0; i < dif; i++){
        int cnt = 0;

        for(int j = 1; j <= M; j++){
            if(M % j ==0){
                cnt++;
            }
        }
        if(cnt == 2){
            if(min > M) min = M;
            sum += M;
        }
        M++;
    }

    if(sum == 0)   cout << -1 << '\n';
    else{
        cout << sum << '\n';
        cout << min << '\n';
    }

    return 0;
}