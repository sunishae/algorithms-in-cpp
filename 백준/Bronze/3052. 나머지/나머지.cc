// number : 3052
// description : 서로 다른 나머지 찾기
// date : 2024.03.12

#include <iostream>

using namespace std;

int main(){
    int mod[41] = {0,};

    for(int i=0; i<10; i++){
        int A;
        cin >> A;
        mod[A%42]++;
    }

    int cnt= 0;
    for(int i=0; i<42; i++){
        if(mod[i]>0) cnt++;
    }

    cout << cnt << endl;

    return 0;
}