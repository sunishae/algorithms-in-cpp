// number : 11723
// description : 집합
// date : 2024.04.11

#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned int s = 0;

    string cmd;
    int n;

    int t;
    cin >> t;
    while(t--){
        cin >> cmd;
        if(cmd == "add"){
            cin >> n;
            s |= (1 << n);
        }
        else if(cmd == "remove"){
            cin >> n;
            s &= ~(1 << n);
        }
        else if(cmd == "check"){
            cin >> n;
            if(s & (1 << n)){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(cmd == "toggle"){
            cin >> n;
            s ^= (1 << n);
        }
        else if(cmd == "all"){
            s = (1 << 21) - 1;
        }
        else{
            s = 0;
        }
    }
    return 0;
}
