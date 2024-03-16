// number : 14215
// description : 삼각형 둘레 합
// date : 2024.03.16

#include <iostream>
#include <algorithm>

using namespace std;

int tri[3];

int main()
{
    cin >> tri[0] >> tri[1] >> tri[2];

    sort(tri, tri + 3);
    if(tri[2] >= tri[1] + tri[0]){
        cout << tri[0] + tri[1] + (tri[0] + tri[1] - 1);
    }
    else{
        cout << tri[0] + tri[1] + tri[2];
    }

    return 0;
}