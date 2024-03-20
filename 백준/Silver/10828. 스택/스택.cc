// number : 10828
// description : 스택
// date : 2024.03.21

#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

stack<int> s;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string ch;
        cin >> ch;

        int num;
        if(ch == "push"){
            cin >> num;
            s.push(num);
        }
        else if(ch == "pop"){
            if(s.size() == 0){
                cout << -1 << "\n";
            }
            else{
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if(ch == "size"){
            cout << s.size() << "\n";
        }
        else if(ch == "empty"){
            if(s.size() == 0){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
        else if(ch == "top"){
            if(s.size() == 0){
                cout << -1 << "\n";
            }
            else{
                cout << s.top() << "\n";
            }
        }
    }

	return 0;
}