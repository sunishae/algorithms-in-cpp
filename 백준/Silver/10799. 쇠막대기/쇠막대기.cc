// number : 10799
// description : 쇠막대기
// date : 2024.03.24

#include <iostream>
#include <stack>

using namespace std;

stack<char> s;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string input;
    cin >> input;

    int cnt = 0;

    for(int i =0; i<input.size(); i++){
        if(input[i] == '(' && input[i+1] == ')'){
            cnt += s.size();
            i++;
        }
        else if(input[i] == ')'){
            s.pop();
            cnt++;
        }
        else{
            s.push(input[i]);
        }

    }

    cout << cnt << endl;

    return 0;
}
