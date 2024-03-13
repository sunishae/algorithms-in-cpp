// number : 1152
// description : 단어의 개수
// date : 2024.03.13

#include <iostream>

using namespace std;

int reverse(int n){
    int res = 0;
    int t = 100;
    for(int i = 0; i<3; i++){
        res += (n%10) * t;
        t /= 10;
        n /= 10;
    }
    return res;
}

int main(){

    int A,B;
    cin >> A >> B;

    A = reverse(A);
    B = reverse(B);

    if(A>B) cout << A;
    else cout << B;

    return 0;
}