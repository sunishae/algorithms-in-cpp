// number : 1152
// description : 단어의 개수
// date : 2024.03.13

#include <iostream>

using namespace std;

int main(){

    int cnt = 0;
    string str;

    getline(cin, str);
    for(int i=0 ; i<str.length(); i++){
        if(str[i] == ' '){
            cnt++;
        }
    }
    cnt ++;

    if(str[0] == ' '){
        cnt--;
    }

    if(str[str.length()-1] == ' '){
        cnt--;
    }

    cout << cnt;

    return 0;
}