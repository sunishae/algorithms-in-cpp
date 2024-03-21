// number : 9093
// description : 단어 뒤집기
// date : 2024.03.21

#include <iostream>
#include <stack>

using namespace std;

stack<char> s;

int main() {

    int n;
    cin >> n;
    getchar();

    for(int i = 0; i < n; i++){
        string str;
        getline(cin, str);

        for(int j = 0; j < str.length(); j++){
            if(str[j] == ' '){
                while(s.empty() == 0){
                    cout << s.top();
                    s.pop();
                }
                cout << " ";
            }
            else{
                s.push(str[j]);
            }
        }
        while(s.empty() == 0){
                cout << s.top();
                s.pop();
            }
        cout << endl;
    }
	return 0;
}
