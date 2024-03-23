// number : 14425
// description : 문자열 집합
// date : 2024.03.23

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> v;

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    v.resize(n); // n의 크기로 vector 초기화

    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    string check;
    int cnt = 0;
    for(int i = 0; i < m; i++) {
        cin >> check;
        if(binary_search(v.begin(), v.end(), check)) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}
