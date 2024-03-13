// number : 11718
// description : 그대로 출력하기
// date : 2024.03.13

#include <iostream>

using namespace std;

int main(){

    string s;

    while(true){
        getline(cin, s);
        if(s == "") break;

        cout << s << endl;
    }

    return 0;
}