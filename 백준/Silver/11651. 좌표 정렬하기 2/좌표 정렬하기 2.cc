// number : 11651
// description : 좌표 정렬
// date : 2024.03.19

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int N;
	cin >> N;

	int x, y;
    vector<pair<int, int>> v;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({y, x});
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].second << ' ' << v[i].first << '\n';
	}

	return 0;
}
