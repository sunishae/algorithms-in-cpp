// number : 10951
// description : A+B
// date : 2024.03.11

#include <iostream>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
	while (!(cin >> a >> b).eof()) {	// 혹은 eof() 대신 fail()을 사용해도 된다.
		cout << a + b << "\n";
	}
}