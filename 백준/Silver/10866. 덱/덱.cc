// number : 10866
// description : 덱
// date : 2024.03.22

#include <iostream>
#include <deque>

using namespace std;

deque<int> dq;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string ch;
        cin >> ch;

        if(ch == "push_front"){
            int num;
            cin >> num;
            dq.push_front(num);
        }
        else if(ch == "push_back"){
            int num;
            cin >> num;
            dq.push_back(num);
        }
        else if(ch == "pop_front"){
            if(dq.size() == 0){
                cout << -1 << "\n";
            }
            else{
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if(ch == "pop_back"){
            if(dq.size() == 0){
                cout << -1 << "\n";
            }
            else{
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if(ch == "size"){
            cout << dq.size() << "\n";
        }
        else if(ch == "empty"){
            if(dq.size() == 0){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
        else if(ch == "front"){
            if(dq.size() == 0){
                cout << -1 << "\n";
            }
            else{
                cout << dq.front() << "\n";
            }
        }
        else if(ch == "back"){
            if(dq.size() == 0){
                cout << -1 << "\n";
            }
            else{
                cout << dq.back() << "\n";
            }
        }
    }

	return 0;
}