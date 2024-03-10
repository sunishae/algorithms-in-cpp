// number : 14681
// description : 사분면 판단
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int x,y;

    cin >> x;
    cin >> y;

    if(x > 0 && y > 0)
        cout << "1" << endl;
    else if(x < 0 && y > 0)
        cout << "2" << endl;
    else if(x < 0 && y < 0)
        cout << "3" << endl;
    else
        cout << "4" << endl;

    return 0;
}