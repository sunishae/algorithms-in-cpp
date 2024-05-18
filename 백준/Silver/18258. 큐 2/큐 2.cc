// number : 18258
// description : 큐2
// date : 2024.05.18

#include <iostream>
#include <string>
#include <queue>


using namespace std;

queue<int> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    while(n--){
        string cmd;
        cin >> cmd;
        if(cmd.compare("push") == 0){
            int num;
            cin >> num;
            q.push(num);
        }
        else if(cmd.compare("pop") == 0){
            if(q.empty()){
                cout << -1 << '\n';
                continue;
            }
            int num;
            num = q.front();
            cout << num << '\n';
            q.pop();
        }
        else if(cmd.compare("size") == 0){
            cout << q.size() << '\n';
        }
        else if(cmd.compare("empty") == 0){
            cout << q.empty() << '\n';
        }
        else if(cmd.compare("front") == 0){
            if(q.empty()){
                cout << -1 << '\n';
                continue;
            }
            cout << q.front() << '\n';
        }
        else if(cmd.compare("back") == 0){
            if(q.empty()){
                cout << -1 << '\n';
                continue;
            }
            cout << q.back() << '\n';
        }
        else{
            cout << -1 << '\n';
        }

    }
    return 0;
}