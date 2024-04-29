// number : 11047
// description : 동전 0
// date : 2024.04.29

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> line;

int main(){
    int n;
    int man;
    int sum = 0;
    
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> man;
        line.push_back(man);
    }

    sort(line.begin(), line.end());

    for(int i = 0; i < n; i++){
        sum += line[i] * (n-i);
    }

    cout << sum << '\n';
    
    return 0;
}