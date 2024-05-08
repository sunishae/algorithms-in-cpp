// number : 1012
// description : 유기농 배추
// date : 2024.05.09

#include <iostream>
#include <algorithm>

using namespace std;

int yard[50][50]; // 필드
void dfs(int x, int y);
int xpos[4] = {0, 0, -1, 1};
int ypos[4] = {1, -1, 0, 0};

int main() {
    int t;
    cin >> t; // 테스트 케이스의 수 입력 받기

    while (t--) {
        int m, n, k;
        cin >> m >> n >> k; 

        // 배추 위치 입력 받기
        while (k--) {
            int x,y;
            cin >> x >> y;
            yard[x][y] = 1;
        }
		int cnt = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
                if(yard[i][j] == 1){
                    dfs(i,j);
                    cnt++;
                }
            }
		}
		cout << cnt << '\n';
    }

    return 0;
}

void dfs(int x, int y){
	yard[x][y] = 0;
    for(int i = 0; i < 4; i++){
        int nx = x + xpos[i];
        int ny = y + ypos[i];
        if(nx >= 0 && nx < 50 && ny >= 0 && ny < 50){
            if(yard[nx][ny] == 1){
                dfs(nx,ny);
            }
        }
    }
}