// number : 10814
// description : 나이순 정렬
// date : 2024.03.19

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool cmp(pair<int,string> a, pair<int,string> b){
    return a.first < b.first;
}

vector<pair<int,string>> v;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int age;
        string name;
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), cmp);
    for(int i=0; i<n; i++){
        cout << v[i].first << " " << v[i].second << "\n";
    }

	return 0;
}