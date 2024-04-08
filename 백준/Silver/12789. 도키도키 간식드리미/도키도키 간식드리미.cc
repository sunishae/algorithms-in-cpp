// number : 12789
// description : 도키도키 간식드리미
// date : 2024.04.07

#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

stack<int> row;
vector<int> people;

int main(){

    int n;
    cin >> n;
    
    int i = n;
    while(i--){
        int p;
        cin >> p;
        people.push_back(p);
    }

    int cnt = 1;
    for(int i=0; i<n; i++){
        if(cnt == people[i]){
            cnt++;
        }
        else if(!row.empty() && cnt == row.top()){
            row.pop();
            cnt++;
            i--;
        }
        else{
            row.push(people[i]);
        }
    }

    int flag = 0;
    while(!row.empty()){
        if(cnt == row.top()){
            cnt++;
            row.pop();
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag == 0) cout << "Nice" << '\n';
    else cout << "Sad" << '\n';

    return 0;
}
