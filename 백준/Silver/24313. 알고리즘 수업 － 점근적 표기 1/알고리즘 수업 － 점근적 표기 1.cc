// number : 
// description : 시간복잡도
// date : 2024.03.16

#include <iostream>

using namespace std;

int main(){

    int a_1, a_0;
    cin >> a_1 >> a_0;

    int c;
    cin >> c;

    int n_0;
    cin >> n_0;

    // a0이 음수일때를 고려해야 한다.
    if( a_1 * n_0 + a_0 <= c * n_0 && a_1 <= c) cout << 1 << '\n';

    else cout << 0 << '\n';

    return 0;
}