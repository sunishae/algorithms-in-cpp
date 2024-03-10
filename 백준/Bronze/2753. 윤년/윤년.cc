// number : 2753
// description : 윤달 판단
// date : 2024.03.10

#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if(year % 4 == 0 && year % 100!= 0 || year %400 == 0)
        cout << "1" << endl;
    else
        cout << "0" << endl;
        
    return 0;
}