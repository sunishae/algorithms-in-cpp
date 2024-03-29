// number : 2475
// description : 검증수
// date : 2024.03.29

#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int num[5];
	int sum = 0;
	for(int i=0; i<5; i++){
		cin >> num[i];
		sum += num[i] * num[i];
	}
	cout << sum % 10 << '\n';

	return 0;
}
