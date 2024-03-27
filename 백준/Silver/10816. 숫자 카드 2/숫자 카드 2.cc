	// number : 10816
	// description : 숫자카드2
	// date : 2024.03.27

	#include <iostream>
	#include <algorithm>
	#include <unordered_map>

	using namespace std;

	unordered_map<int,int> mp;

	int main() {
		ios::sync_with_stdio(false);
		cin.tie(0);

		int n;
		cin >> n;

		int num;
		for(int i=0; i<n; i++){
			cin >> num;
			mp[num]++;
		}

		int m;
		cin >> m;
		for(int i=0; i<m; i++){
			cin >> num;
			cout << mp[num]<< " ";
		}

	}
