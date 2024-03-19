// number : 2839
// description : 설탕 배달
// date : 2024.03.19

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;

    while(n>= 3 && n % 5 != 0){
        n -= 3;
        cnt++;
    }
    while(n >= 5){
        n -= 5;
        cnt++;
    }

    if(n == 0)
        cout << cnt << endl;
    else
        cout << -1 << endl;

    return 0;
}