// number : 9086
// description : 문자열 첫/끝 글자 출력
// date : 2024.03.12

#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        string str;
        cin >> str;

        cout << str[0];
        cout << str[str.length()-1] << endl;
    }


    return 0;
}