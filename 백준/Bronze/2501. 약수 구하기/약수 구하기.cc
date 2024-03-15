// number : 5086
// description : 배수와 약수
// date : 2024.03.16

#include <iostream>

using namespace std;

int main() {

    int N,K;
    cin >> N >> K;

    for( int i = 1 ; i <= N ; i++ ) {
        if( N % i == 0 ){
            K--;
            if(K == 0){
                cout << i;
                break;
            }
        } 
    }
    if(K > 0) cout << 0 << endl;


    return 0;
}