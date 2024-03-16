// number : 1085
// description : 직사각형 탈출
// date : 2024.03.16

#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y,w,h;
    cin >> x >> y >> w >> h;

    int arr[4];
    arr[0] = w -x;
    arr[1] = h -y;
    arr[2] = x;
    arr[3] = y;

    cout << min({arr[0], arr[1], arr[2], arr[3]}) << endl;

    return 0;
}