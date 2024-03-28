// number : 11478
// description : 서로 다른 부분 문자열의 개수
// date : 2024.03.28

#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string> result;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	string tmp = "";
	int len;

	cin >> input;
	len = input.length();
	for(int i=0; i<len; i++){
		for(int j=i; j<len; j++){
			tmp += input[j];
			result.insert(tmp);
		}
		tmp = "";
	}

	cout << result.size() << '\n';

	return 0;
}
