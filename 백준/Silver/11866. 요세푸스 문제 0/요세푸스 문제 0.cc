// number : 11866
// description : 요세푸스 문제 0
// date : 2024.05.20

#include <iostream>
#include <queue>

using namespace std;
queue<int> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; i++){
        q.push(i);
    }

    cout << "<";
    int idx = k - 1;
    while(q.size() != 0){
        for(int i = 1; i < k; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if(q.size() != 1) 
            cout << ", ";

        q.pop();
    }
    cout << ">" << '\n';
    return 0;
}