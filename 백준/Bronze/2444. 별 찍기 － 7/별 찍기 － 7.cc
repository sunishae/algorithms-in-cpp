// number : 2444
// description : 별찍기 7
// date : 2024.03.13

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i =1; i<=n; i++){
        for(int j = 0; j < n-i; j++)
            cout << " ";
        for(int j = 0; j < 2*i-1; j++)
            cout << "*";
        
        cout << '\n';
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++)
            cout << " ";
        for(int j = 0; j < 2*n - (2*i+1); j++)
            cout << "*";
        
        cout << '\n';
    }

    return 0;
}