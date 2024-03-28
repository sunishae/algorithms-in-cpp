// number : 1735
// description : 분수 합
// date : 2024.03.28

#include <iostream>

using namespace std;

int main(){
	int a_l, a_h;
	int b_l, b_h;
	int tmp_l, tmp_h;
	int r;

	cin >> a_h >> a_l;
	cin >> b_h >> b_l;

	tmp_l = a_l * b_l;
	tmp_h = a_h * b_l + b_h * a_l;

	int a = tmp_h;
	int b = tmp_l;

	while(b != 0){
		r = a % b;
        a = b;
        b = r;
	}

	cout << tmp_h/a << " " <<tmp_l/a<< "\n";

	return 0;
}
