// number : 9063
// description : 최대 사각형의 넓이
// date : 2024.03.16

#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;

    int x,y;

    int minx,maxx,miny,maxy;
    cin >> minx >> miny;
    maxx = minx;
    maxy = miny;
    
    for(int i = 1; i < N;i++){
        cin >> x >> y;
        if(x < minx) minx = x;
        if(x > maxx) maxx = x;
        if(y < miny) miny = y;
        if(y > maxy) maxy = y;
    }

    cout << (maxx - minx) * (maxy - miny) << endl;

    return 0;
}