// number : 5597
// description : 출석안한 2명 찾기
// date : 2024.03.12

#include <iostream>

using namespace std;

int main(){

    int attempt[30] = {0,};
    int student;

    for(int i=0; i<28; i++){
        cin >> student;
        attempt[student-1]++;
    }

    for(int i=0; i<30; i++){
        if(attempt[i] == 0)
            cout << i+1 << endl;
    }

    return 0;
}