// number : 10798
// description : 세로읽기
// date : 2024.03.14

#include <iostream>

using namespace std;

string word[5];

int main() {

	for (int i = 0; i < 5; i++)
		cin >> word[i];

	for (int i = 0; i < 15; i++){
		for (int k = 0; k < 5; k++){
			if(i < word[k].size()){
                cout << word[k][i];
            }
		}
	}

	return 0;
}