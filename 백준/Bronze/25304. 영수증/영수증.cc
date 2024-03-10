// number : 25304
// description : 영수증 비교
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int total;      // 총 금액
    int cnt;        // 횟수
    int price;
    int many;

    cin >> total;
    cin >> cnt;

    for(int i=0; i<cnt; i++) {
        cin >> price >> many;
        total -= price * many;
    }

    if( total == 0 ) cout << "Yes";
    else cout << "No";

    return 0;
 
}