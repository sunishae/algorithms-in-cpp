// number : 17103
// description : 골드바흐 파티션
// date : 2024.03.30

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n = 1000001;
vector<bool> prime(n,true);

void setPrime(){
	for(int i=2 ; i*i <=n ;i++){
		if(prime[i] == false) 
			continue;

		for(int j = i*i; j<=n; j+=i){
			prime[j] = false;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	setPrime();
	int t,num;
	cin >> t;

	while(t--){
		int cnt = 0;
		cin >> num;

		for(int i = 2; i<= num/2; i++){
			if(prime[i] && prime[num-i]){
				cnt++;
			}
		}
		cout << cnt << '\n';

	}

	return 0;
}