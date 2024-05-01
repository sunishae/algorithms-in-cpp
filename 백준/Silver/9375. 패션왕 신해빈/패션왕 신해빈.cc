// number : 9375
// description : 패션왕 신해빈
// date : 2024.05.01
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    string type, name;

    while(t--){
        map<string, int> m;
        int n;
        int i;

        cin >> n;
        while(n--){
            cin >> name >> type;
            if(m.find(type) == m.end()){
                m.insert({type, 1});
            }
            else{
                m[type]++;
            }
        }

        int res = 1;
        for(auto i : m){
            res *= (i.second + 1);
        }
        res -= 1; // 모두 벗는 경우 제외
        cout << res << '\n';

    }
}