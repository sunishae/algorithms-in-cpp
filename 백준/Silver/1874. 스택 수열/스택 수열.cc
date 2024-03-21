// number : 1874
// description : 스택 수열
// date : 2024.03.21

#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

stack<int> s;
vector<int> v;
vector<char> pp;

int main() {
    int n;          // n까지의 수
    cin >> n;

    int cnt = 1;        // 스택에 push할 다음 숫자

    for(int idx = 0; idx < n; idx++){
        int x;
        cin >> x;
        while(x >= cnt){
            s.push(cnt);
            cnt++;
            pp.push_back('+');
        }
        if(s.top() == x){
            s.pop();
            pp.push_back('-');
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    
    for(int i =0; i < pp.size(); i++){
        cout << pp[i] << " ";
    }

    return 0;
}