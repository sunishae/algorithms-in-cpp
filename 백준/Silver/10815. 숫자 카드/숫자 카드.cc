// number : 10815
// description : 숫자 카드
// date : 2024.03.20

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int>v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >>num;

    vector<int> N;
    for(int i=0; i<num; i++){
        int tmp;
        cin >> tmp;
        N.push_back(tmp);
    }

    sort(N.begin(), N.end());

    int m;
    cin >> m;

    for(int i=0; i<m; i++){
        int tmp;
        cin >> tmp;
        if(binary_search(N.begin(), N.end(), tmp)){
            cout << 1 << ' ';
        }
        else{
            cout << 0 << ' ';
        }
    }

	return 0;
}
