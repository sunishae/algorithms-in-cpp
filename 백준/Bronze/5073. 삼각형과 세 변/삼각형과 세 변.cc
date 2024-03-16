// number : 10101
// description : 삼각형 종류 
// date : 2024.03.16

#include <iostream>
#include <algorithm>

using namespace std;

int tri[3];

int main()
{
    while(true){
        for(int i = 0; i < 3; i++)
            cin >> tri[i];

        if(tri[0] == 0 && tri[1] == 0 && tri[2] == 0) break;
        
        sort(tri, tri + 3);
        if(tri[2] >= tri[1] + tri[0])  cout << "Invalid" << '\n';

        else if (tri[0] != tri[1] && tri[1] != tri[2] && tri[2]!= tri[0])
            cout << "Scalene" << '\n';
        else{
            if(tri[0] == tri[1] && tri[1] == tri[2])
                cout << "Equilateral" << '\n';
            else{
                cout << "Isosceles" << '\n';    
            }
        }
    }

    return 0;
}