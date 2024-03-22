// number : 1158
// description : 요세푸스 문제
// date : 2024.03.22

#include <iostream>
#include <queue>

using namespace std;

queue<int> q;

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int N;
    int K;
    cin >> N >> K;

    for(int i=1; i<=N; i++) q.push(i);

    cout <<"<";

    while(q.size() > 1){
        for(int i=1; i<K; i++){
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">\n";

	return 0;
}