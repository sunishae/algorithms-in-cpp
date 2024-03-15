// number : 5086
// description : 배수와 약수
// date : 2024.03.16

#include <iostream>

using namespace std;

int main() {

    int a,b;
    while(true){
        cin >> a>> b;
        if(a == 0 && b == 0) break;

        if(b % a == 0)       cout << "factor" << endl;
        else if (a % b == 0) cout << "multiple" << endl;
        else                 cout << "neither" << endl; 
    }

    return 0;
}