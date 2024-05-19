// number : 2164
// description : 카드2
// date : 2024.05.19

#include <iostream>
#include <queue>

using namespace std;
queue<int> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i <=n; i++){
        q.push(i);
    }

    while(q.size() != 1){
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front() << "\n";
    
    return 0;
}