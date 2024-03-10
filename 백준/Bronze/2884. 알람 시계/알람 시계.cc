// number : 2884
// description : 알람 시계 45분 빼기
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    int m;

    cin >> hour >> minute;
    m = minute - 45;
    if (m < 0) {
        m += 60;
        hour--;
    }
    if (hour < 0) {
        hour += 24;
    }   
    cout << hour << " " << m << endl;

    return 0;
}