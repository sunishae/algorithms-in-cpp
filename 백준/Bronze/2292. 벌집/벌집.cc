// number : 2292
// description : 벌집
// date : 2024.03.15

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 0;

    for(int sum = 2; sum <= N; i++) {
        sum += i * 6;
    }
    if(N <=1 ) i = 1;

    cout << i << endl;

    return 0;
}