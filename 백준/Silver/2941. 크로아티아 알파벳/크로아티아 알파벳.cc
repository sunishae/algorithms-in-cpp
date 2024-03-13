// number : 2941
// description : 크로아티아 알파벳
// date : 2024.03.14

#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int cnt = s.length();
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '-')
            cnt--;
        
        if( s[i] == 'j' && (s[i-1] == 'l' || s[i-1] == 'n')) 
            cnt--;

        if(s[i] == '='){
            cnt--;
            if(s[i-1] == 'z' && s[i-2] == 'd') cnt--;
        }
    }
    
    cout << cnt << endl;


    return 0;
}