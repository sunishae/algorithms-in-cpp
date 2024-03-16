// number : 10101
// description : 삼각형 종류 
// date : 2024.03.16

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;

    if(a+b+c != 180){
        cout << "Error";
    }
    else{
        if( a == b || b == c || a == c){
            if(a == b && a == c ){
                cout << "Equilateral";
            }
            else {
                cout << "Isosceles";
            }
        }
        else{
            cout << "Scalene";
        }
    }

    return 0;
}