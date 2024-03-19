// number : 1436
// description : 영화감독 숌
// date : 2024.03.19

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    int i;

    for(i = 666; i < 100000000; i++){
        string s = to_string(i);
        if(s.find("666") != string::npos){
            cnt++;
        }
        if(cnt == n)break;
    }

    cout << i << endl;

    return 0;
}