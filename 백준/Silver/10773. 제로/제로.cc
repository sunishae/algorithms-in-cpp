// number : 10773
// description : 제로
// date : 2024.03.31

#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		if(n == 0) 	s.pop();
		else 		s.push(n);

	}

	int sum = 0;
	int cap = s.size();
	for(int i=0; i<cap; i++){
		sum += s.top();
		s.pop();
	}

	cout << sum << '\n';

	return 0;
}