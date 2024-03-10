// number : 2588
// description : 곱셈 연산 과정 구현
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    int b_1 = b%10;
    int b_2 = (b%100)/10;
    int b_3 = b/100;

    cout << a * (b_1) << endl;
    cout << a * (b_2) << endl;
    cout << a * (b_3) << endl;
    cout << a * b << endl;

    
    return 0;
}