// number : 
// description : 시간복잡도
// date : 2024.03.16

#include <iostream>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    cout << (N * (N-1) * (N -2)) / 6 << '\n' << 3;

    return 0;
}