// number : 2231
// description : 분해합
// date : 2024.03.19

#include <iostream>

using namespace std;

int main(){

    int m;
    cin >> m;

    int result = 0;

    for(int i =0; i< m; i++){
        int sum = 0;
        int num = i;
        while (num != 0){
            sum += num % 10;
            num /= 10;
        }
        if(sum + i == m){
            result = i;
            break;
        }
    }

    cout << result << endl;

    return 0;
}