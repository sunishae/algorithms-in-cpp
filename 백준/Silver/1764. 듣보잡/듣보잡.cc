	// number : 1764
	// description : 듣보잡
	// date : 2024.03.28

	#include <iostream>
	#include <algorithm>
	#include <vector>

	using namespace std;

	vector<string> names;
	vector<string> dup;

	int main() {
		ios::sync_with_stdio(false);
		cin.tie(0);

		int cnt = 0;
		int n,m;
		cin >> n >> m;

		string name;
		for(int i=0; i<n; i++){
			cin >> name;
			names.push_back(name);
		}

		sort(names.begin(), names.end());	// 이진탐색을 위한 정렬

		for(int i=0; i<m; i++){
			cin >> name;
			if(binary_search(names.begin(), names.end(),name) == true){
				dup.push_back(name);
                cnt++;
			}
		}

		sort(dup.begin(), dup.end());	// 사전순 출력을 위한 정렬

		cout << cnt << '\n';
		for(int i=0; i<cnt; i++){
			cout << dup[i] << '\n';
		}

	}
