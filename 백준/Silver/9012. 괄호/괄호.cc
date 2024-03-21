// number : 9012
// description : 괄호 검사
// date : 2024.03.21

#include <iostream>
#include <stack>

using namespace std;

stack<char> s;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        
        while (!s.empty()) {
            s.pop(); // 스택 비우기
        }
        
        s.push(str[0]);
        for (int j = 1; j < str.length(); j++) {
            if (str[j] == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                } else {
                    s.push(str[j]);
                }
            } else {
                s.push(str[j]);
            }
        }
        
        if (s.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
