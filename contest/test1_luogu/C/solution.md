# B3655 [语言月赛202208] 天天爱跑步 题解

## 题意

给出 $n$ 天签到情况（1 表示签到，0 表示未签到）和六个奖励值 $v_1,v_3,v_7,v_{30},v_{120},v_{365}$。连续签到天数 $c$（断签清零）达到 1、3、7、30、120、365 天时，当天奖励提升为对应档位的值；$c \ge 366$ 天后恒为 $v_{365}$。求 $n$ 天获得活跃值的总和。

## 思路

直接模拟：维护当前连续签到天数 $c$。

- 当天签到：$c \leftarrow c+1$，当天奖励为"阈值 $\le c$"的最高那一档（$c\ge 365$ 取 $v_{365}$，否则取最大的阈值 $t \le c$ 对应的 $v_t$);
- 当天未签到：$c \leftarrow 0$，奖励为 $0$。

累加每天奖励即可。$n \le 10^6$,$O(n)$ 轻松通过。注意总和最大约 $10^9$，用 `long long` 更保险。

## 复杂度

- 时间 $O(n)$,空间 $O(1)$。

## 参考代码（C)

```c
#include <stdio.h>

int th[6] = {1, 3, 7, 30, 120, 365};

int main(void) {
    int n;
    scanf("%d", &n);
    long long v[6];
    for (int i = 0; i < 6; i++) scanf("%lld", &v[i]);

    long long c = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (x == 1) {
            c++;
            int idx = 0;
            for (int j = 0; j < 6; j++)
                if (c >= th[j]) idx = j;
            sum += v[idx];
        } else {
            c = 0;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
```
