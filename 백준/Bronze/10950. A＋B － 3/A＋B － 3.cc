// number : 10950
// description : A+B 반복문
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int cnt =0;
    int a,b;

    cin >> cnt;
    for(int i=0; i<cnt; i++){
        cin >> a >> b;
        cout << a+b << endl;
    }
    return 0;
}