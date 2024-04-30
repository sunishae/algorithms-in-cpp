// number : 2606
// description : 바이러스
// date : 2024.04.30
#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
#define MAX 101

int arr[MAX][MAX];
bool visited[MAX] = {false,}; // 방문 여부 배열
int cnt = 0; // 감염된 컴퓨터 수

void bfs(int start, int comp) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int i = 1; i <= comp; i++) {
            if (arr[v][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = true;
                cnt++;
            }
        }
    }
}

int main() {
    int comp; // 컴퓨터의 수
    int connect; // 간선의 수

    cin >> comp;
    cin >> connect;

    for (int i = 0; i < connect; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    bfs(1, comp); // 시작 노드와 컴퓨터의 수 전달

    cout << cnt << '\n';

    return 0;
}
