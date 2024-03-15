// number : 2903
// description : 중앙 이동 알고리즘
// date : 2024.03.15

#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int dot = 2;

    for(int i = 0; i < N; i++){
        dot = dot*2 -1;
    }

    cout << dot*dot << endl;

    return 0;
}