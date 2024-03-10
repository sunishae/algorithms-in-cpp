// number : 2739
// description : 구구단 
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int n,i=1;

    cin >> n;
    for(; i<=9; i++) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}