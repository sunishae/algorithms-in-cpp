// number : 2869
// description : 추억의 달팽이 문제
// date : 2024.03.16

#include <iostream>

using namespace std;

int main() {

    int A,B,V;
    cin >> A >> B >> V;

    int day = 1;
    day += (V - A)/(A-B);
    
    if((V-A)%(A-B)) 
        cout << day + 1 << endl;
    else
        cout << day << endl;

    return 0;
}