# P1002 [NOIP 2002 普及组] 过河卒 题解

## 题意

棋盘 $A(0,0)$ 处有过河卒，要走到 $B(n,m)$，每步只能向下或向右。对方一匹马固定在 $C(x,y)$，马所在点与马"日"字一步可达的点共 9 个点是控制点，卒不能进入。求从 $A$ 到 $B$ 不经过控制点的路径条数。$n,m \le 20$，保证起点不是控制点。

## 思路

经典二维 DP。设 $dp[i][j]$ 为从 $(0,0)$ 走到 $(i,j)$ 且不经过控制点的路径数：

- 若 $(i,j)$ 是控制点，$dp[i][j] = 0$;
- 否则 $dp[i][j] = dp[i-1][j] + dp[i][j-1]$（越界项视为 0），边界 $dp[0][0] = 1$。

马的 9 个控制点：$(x,y)$ 本身加上 8 个日字偏移 $(\pm2,\pm1),(\pm1,\pm2)$，注意越出棋盘的点不用标记。

**答案必须用 `long long`**：路径总数最坏为 $\binom{40}{20} \approx 1.4 \times 10^{11}$，远超 `int`。

验证样例：$n=m=6$，马在 $(3,3)$，答案 6 ✓。

## 复杂度

- 时间 $O(nm)$,空间 $O(nm)$。

## 参考代码（C)

```c
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
```
