// number : 1269
// description : 대칭 차집합
// date : 2024.03.28

#include <iostream>
#include <set>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 0;
	int n,m;
	cin >> n >> m;

	set<int> a;
	set<int> b;

	int tmp;
	for(int i=0;i<n;i++){
		cin >> tmp;
		a.insert(tmp);
	}

	for(int j=0; j<m; j++){
		cin >> tmp;
		if(a.find(tmp) != a.end()){
			cnt++;
		}
        b.insert(tmp);
	}

	n -= cnt;
	m -= cnt;

	cout << n+m << '\n';

	return 0;
}