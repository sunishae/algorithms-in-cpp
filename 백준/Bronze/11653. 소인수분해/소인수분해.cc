// number : 11653
// description : 소인수분해
// date : 2024.03.16

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    while(N > 1){
        for(int i =2; i <= N; i++){
            if(N % i == 0){
                cout << i << '\n';
                N /= i;
                break;
            }
        }
    }


    return 0;
}