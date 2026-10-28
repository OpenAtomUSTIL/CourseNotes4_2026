#include <stdio.h>

long long dp[25][25];
int ctrl[25][25];
int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

int main(void) {
    int n, m, x, y;
    scanf("%d %d %d %d", &n, &m, &x, &y);

    ctrl[x][y] = 1;
    for (int k = 0; k < 8; k++) {
        int nx = x + dx[k], ny = y + dy[k];
        if (nx >= 0 && nx <= n && ny >= 0 && ny <= m)
            ctrl[nx][ny] = 1;
    }

    dp[0][0] = 1;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++) {
            if (ctrl[i][j]) { dp[i][j] = 0; continue; }
            if (i == 0 && j == 0) continue;
            long long up = i > 0 ? dp[i - 1][j] : 0;
            long long left = j > 0 ? dp[i][j - 1] : 0;
            dp[i][j] = up + left;
        }

    printf("%lld\n", dp[n][m]);
    return 0;
}
