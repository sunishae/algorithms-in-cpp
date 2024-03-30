// number : 13909
// description : 창문 닫기
// date : 2024.03.30

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int cnt = 0;
	for(int i=1; i*i<=n; i++){
		cnt++;
	}

	cout << cnt;

	return 0;
}