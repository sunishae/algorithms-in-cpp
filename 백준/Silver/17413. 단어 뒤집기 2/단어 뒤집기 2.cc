// number : 17413
// description : 단어 뒤집기2
// date : 2024.03.23ㄹ

#include <iostream>
#include <stack>

using namespace std;

stack<char> s;

int main() {

    string str;
    getline(cin, str);
    int flag = 0;

    for(int j = 0; j < str.length(); j++){
        if(str[j] == '<'){
            while(s.empty() ==0){
                cout << s.top();
                s.pop();
            }
            cout << str[j];
            flag = 1;
            continue;
        }
        else if(flag == 1){
            cout << str[j];
            if(str[j] == '>') flag = 0;
            continue;
        }

        if(str[j] == ' '){
            while(s.empty() ==0){
                cout << s.top();
                s.pop();
            }
            cout << ' ';
        }
        else{
            s.push(str[j]);
        }
    }
    while(s.empty() ==0){
        cout << s.top();
        s.pop();
    }

    cout << '\n';

    return 0;
}
