// number : 19532
// description : 연립방정식
// date : 2024.03.19

#include <iostream>

using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    int x,y;
    int flag = 0;
    for(x = -999; x<=999; x++){
        for(y = -999; y<=999; y++){
            if(((a*x + b*y) == c) && ((d*x + e*y) == f)){
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }

    cout << x << " " << y << endl;

    return 0;
}