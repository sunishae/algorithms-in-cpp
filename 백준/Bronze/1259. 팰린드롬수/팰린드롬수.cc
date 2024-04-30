// number : 1259
// description : 팰린드롬수
// date : 2024.04.30

#include <iostream>
#include <string>
using namespace std;

string reverse(string s){
    string r = "";
    for(int i = s.size()-1; i >= 0; i--){
        r += s[i];
    }
    return r;
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    while( s != "0" ){
        if(s == reverse(s)){
            cout << "yes" << '\n';
        }
        else 
            cout << "no" << '\n';

        cin >> s;
    }


    return 0;
}
