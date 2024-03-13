// number : 1157
// description : 중복된 알파벳 탐색
// date : 2024.03.13

#include <iostream>

using namespace std;

int main(){
    int alpha[26] = {0,};

    string input;
    cin >> input;

    // 대문자로 변환
    for(int i = 0; i < input.length(); i++){
        input[i] = toupper(input[i]);
        alpha[input[i] - 'A']++;
    }

    int max = alpha[0];
    int idx = 0;

    // 가장 많이 나온 알파벳 찾기
    for(int i = 1; i < 26; i++){
        if(alpha[i] > max){
            max = alpha[i];
            idx = i;
        }
    }

    // 최댓값과 같은 알파벳이 있는지 확인
    bool duplicate = false;
    for(int i = 0; i < 26; i++){
        if(i != idx && alpha[i] == max){
            duplicate = true;
            break;
        }
    }

    // 결과 출력
    if(duplicate){
        cout << "?";
    } else {
        cout << (char)(idx + 'A');
    }

    return 0;
}