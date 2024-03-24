// number : 17298
// description : 오큰수
// date : 2024.03.24

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

stack<int> s;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;  // 수열의 크기
    cin >> n;

    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    vector<int> result(n, -1);
    for(int i=0; i<n; i++){
        while(!s.empty() && v[i] > v[s.top()]){
            result[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }

    for(int num : result){
        cout << num << " ";
    }

    return 0;
}
