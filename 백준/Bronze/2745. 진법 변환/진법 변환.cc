// number : 2745
// description : 진법계산
// date : 2024.03.14

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string N;
    int B;
    int buf =0;
    int sum = 0;

    cin >> N >> B;
    for(int i = 0; i < N.length(); i++){
        int idx = N.length() - i-1;
        if(N[idx] - 'A' >= 0){
            buf = N[idx] - 55;
            sum += buf * pow(B, i);
        }
        else{
            buf = N[idx] - '0';
            sum += buf * pow(B, i);
        }
    }

    cout << sum << endl;

    return 0;
}