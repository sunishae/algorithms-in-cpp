// number : 2525
// description : 오븐 시계 
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int max;

    cin >> a >> b >> c;

    if(a>b && a>c)
        max = a;
    else if (b>a && b>c)
        max = b;
    else
        max = c;

    if(a==b && b==c)
        cout << 10000 + a*1000 << endl;
    else if(a != b && b != c && a!= c)
        cout << max*100 << endl;
    else{
        if(a ==b)
            cout << 1000 + a*100 << endl;
        else if (b==c)
            cout << 1000 + b*100 << endl;
        else
            cout << 1000 + c*100 << endl;
    }

    return 0;
}