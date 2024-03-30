// number : 4948
// description : 베르트랑 공준
// date : 2024.03.30

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) 
{
	int end = sqrt(num);
	if(end == 1 && num != 1) return true;
	if(num % 2 == 0)		 return false;
	for(int i =2; i <= end; i++){
		if(num%i == 0) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n,cnt;

	while(true){
		cin >> n;
		if(n == 0 ) break;

		cnt = 0;
		for(int i= n +1; i <=2*n; i++)
			if(isPrime(i)) cnt++;

		cout << cnt << "\n";
	}

	return 0;
}