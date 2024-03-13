// number : 2908
// description : 
// date : 2024.03.13

#include <iostream>

using namespace std;

int main(){
    
    int time[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    int sum = 0;

    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        sum += time[s[i] - 'A'];
    }

    cout << sum;

    return 0;
}