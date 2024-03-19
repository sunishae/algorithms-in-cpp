// number : 1018
// description : 체스판 다시 chill 하기
// date : 2024.03.19
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char **chess;
    chess = new char*[n];
    for (int i = 0; i < n; i++) {
        chess[i] = new char[m];
        cin >> chess[i];
    }

    char color[2] = {'W', 'B'};
    int mincnt[2] = {1000000, 1000000}; // 변경 횟수의 최소값을 저장할 배열

    for (int k = 0; k < 2; k++) {
        int next = k;
        int **result = new int*[n];
        for (int i = 0; i < n; i++) {
            result[i] = new int[m](); // ()를 사용하여 0으로 초기화
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                next = (next + 1) % 2;
                if (chess[i][j] != color[next]) {
                    result[i][j] = 1; // 'B'로 바뀐 경우에는 1로 표시
                }
            }
            if (m % 2 == 0) {
                next = (next + 1) % 2;
            }
        }

        for (int i = 0; i <= n - 8; i++) {
            for (int j = 0; j <= m - 8; j++) {
                int sum = 0;
                for (int x = 0; x < 8; x++) {
                    for (int y = 0; y < 8; y++) {
                        sum += result[i + x][j + y];
                    }
                }
                mincnt[k] = min(mincnt[k], sum);
            }
        }

        // 동적으로 할당한 배열 해제
        for (int i = 0; i < n; i++) {
            delete[] result[i];
        }
        delete[] result;
    }

    cout << min(mincnt[0],mincnt[1]) << endl;

    return 0;
}
