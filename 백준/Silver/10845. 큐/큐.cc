// number : 10845
// description : 큐
// date : 2024.03.22

#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string ch;
        cin >> ch;

        if(ch == "push"){
            int num;
            cin >> num;
            q.push(num);
        }
        else if(ch == "pop"){
            if(q.size() == 0){
                cout << -1 << "\n";
            }
            else{
                cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(ch == "size"){
            cout << q.size() << "\n";
        }
        else if(ch == "empty"){
            if(q.size() == 0){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
        else if(ch == "front"){
            if(q.size() == 0){
                cout << -1 << "\n";
            }
            else{
                cout << q.front() << "\n";
            }
        }
        else if(ch == "back"){
            if(q.size() == 0){
                cout << -1 << "\n";
            }
            else{
                cout << q.back() << "\n";
            }
        }
    }

	return 0;
}