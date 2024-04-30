// number : 17219
// description : 비밀번호 찾기
// date : 2024.04.30

#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string,string> passwd;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int n, m;
    string site;
    string pwd;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> site >> pwd;
        passwd[site] = pwd;
    }

    for(int i = 0; i < m; i++){
        cin >> site;
        cout << passwd[site] << '\n';
    }

    return 0;
}
