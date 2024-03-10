// number : 1330
// description : 두 수 비교하기
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    if(a<b)
        cout << '<' << endl;
    else if(a>b)
        cout << '>' << endl;
    else
        cout << "==" << endl;

    return 0;
}