// number : 8393
// description : 1~n 까지의 합
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int n=1;
    int sum = 0;
    
    cin >> n;

    for(int i=1; i<=n; i++) {
        sum += i ;
    }
    cout << sum << endl;

    return 0;
}