// number : 11005
// description : 진법 계산2
// date : 2024.03.15

#include <iostream>
#include <cmath>

void func(int N, int B);

using namespace std;

int main() {

    int N, B;
    cin >> N >> B;

    func(N, B);

    return 0;
}

void func(int N, int B){
    int mod;

    if(N > 0){
        mod = N % B;
        N = N / B;
        
        func(N, B);

        if(mod >= 10){
            char buf;
            buf = mod + 55;
            cout << buf;
        }        
        else{
            cout << mod;
        }
    }
    return;

}
