// number : 2577
// description : 숫자의 개수
// date : 2024.03.29

#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a,b,c;
	cin >> a >> b >> c;

	int result;
	result = a * b * c;

	int cnt[10] = {0,};
	while(result != 0 ){
		cnt[result % 10]++;
        result /= 10;
	}

	for(int i =0; i<10; i++){
		cout << cnt[i] << '\n';
	}

	return 0;
}
