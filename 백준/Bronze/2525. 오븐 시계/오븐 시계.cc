// number : 2525
// description : 오븐 시계 
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int hour, minute, plus;
    int m;

    cin >> hour >> minute;
    cin >> plus;

    minute += plus;
    m = minute / 60;
    if(minute >= 60){
        hour += m;
        minute = minute % 60;
    }
    if(hour >= 24){
        hour = hour % 24;
    }
    cout << hour << " " << minute << endl;
    
    return 0;
}