// number : 1316
// description : 그룹 단어 체커
// date : 2024.03.14

#include <iostream>

using namespace std;

int main(){
    int n;      //단어 개수

    cin >> n;
    string s[n];
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    int cnt = n;    // 그룹단어 개수
    for(int i=0; i<n; i++){
        for(int j = 0; j < s[i].length(); j++){
            if(s[i].find(s[i][j], j+1) != string::npos){
                if(s[i][j] != s[i][j+1]){
                    cnt--;
                    break;
                }
                    
            }
        }
    }
    cout << cnt << endl;

    return 0;
}