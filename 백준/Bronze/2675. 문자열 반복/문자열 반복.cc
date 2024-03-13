// number : 2675
// description : 문자열 반복
// date : 2024.03.13

#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        int R;
        string str;

        cin >> R;
        cin >> str;

        for(int i=0; i<str.length(); i++){
            for(int j=0; j<R; j++){
                cout << str[i];
            }
        }
        cout << endl;

    }

    return 0;
}
