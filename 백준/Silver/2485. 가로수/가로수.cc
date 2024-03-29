// number : 2485
// description : 가로수
// date : 2024.03.29

#include <iostream>
#include <vector>

using namespace std;

vector<int> trees;
vector<int>::iterator it;
vector<int> inter;

int gcd(int a, int b){
	while(b != 0){
		int tmp = a%b;
		a = b;
		b = tmp;
	}
	return a;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	int tree;
	for(int i=0; i<n; i++){
		cin >> tree;
        trees.push_back(tree);
	}

	int val;
	it = trees.begin();
	while(it+1 != trees.end()){
		val = *(it+1) - *it;
		inter.push_back(val);
		it++;
	}

	int g = inter[0];
	for(int i=0; i< inter.size(); i++){
		g = gcd(g, inter[i]);
	}

	int result = 0;
	for(int i =0; i< inter.size(); i++){
		result += inter[i] / g - 1;
	}

	cout << result << "\n";

	return 0;
}
