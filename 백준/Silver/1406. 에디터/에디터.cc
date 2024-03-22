// number : 1406
// description : 에디터
// date : 2024.03.22

#include <iostream>
#include <list>

using namespace std;

int main() {
    string init;    // 초기 문자열
    cin >> init;

    list<char> editor(init.begin(), init.end());
    auto cursor = editor.end();

    int M;  // 명령어 개수
    cin >> M;

    for(int i=0; i<M; i++){
        char cmd;     // 명령어
        cin >> cmd;
        if(cmd == 'P'){
            char ch;
            cin >> ch;
            editor.insert(cursor, ch);
        }
        else if(cmd == 'L'){
            if(cursor == editor.begin()) continue;   // 커서가 가장 왼쪽이면 무시
            cursor--;
        }
        else if(cmd == 'D'){
            if(cursor == editor.end()) continue;
            cursor++;
        }
        else if(cmd == 'B'){
            if(cursor == editor.begin()) continue;  // 커서가 가장 왼쪽이면 무시
            cursor = editor.erase(--cursor);
        }
    }
    
    for(auto ch : editor){
        cout << ch;
    }
    cout << '\n';

    return 0;
}