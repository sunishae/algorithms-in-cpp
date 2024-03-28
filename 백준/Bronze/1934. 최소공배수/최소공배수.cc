// number : 1934
// description : 최소공배수
// date : 2024.03.28

#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	int a,b,r, m;
	for(int i=0; i<t; i++){
		cin >> a >> b;
		m = a*b;
		while(b != 0){
			r = a % b;
            a = b;
            b = r;
		}
		cout << m/a << "\n";
	}


	return 0;
}

