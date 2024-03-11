// number : 2439
// description : 별찍기 오른쪽 정렬
// date : 2024.03.11

#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {

	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for(int i = 1; i <= n; i++) {
		for(int j = 0; j < n-i; j++){
			cout << ' ';
		}

		for(int j = 0; j <i; j++){
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}