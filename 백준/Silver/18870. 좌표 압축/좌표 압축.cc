// number : 18870
// description : 좌표 압축
// date : 2024.03.19

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

vector<int>v;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    vector<int> result = v;

    sort(result.begin(), result.end());     
    result.erase(unique(result.begin(), result.end()), result.end());

    map<int, int> m;
    for(int i=0; i<result.size(); i++){
        m[result[i]] = i;
    }

    for(int i=0; i<n; i++){
        int x = v[i];
        cout << m[x] << " ";
    }

    cout << endl;

	return 0;
}
