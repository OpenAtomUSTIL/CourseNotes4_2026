# P8869 [传智杯 #5 初赛] A-莲子的软件工程学 题解

## 题意

给定整数 $a,b$（$b \ne 0$，均在 32 位有符号整型范围内），计算

$$\operatorname{fun}(a,b) = \operatorname{sgn}(b) \times |a| = \begin{cases} |a|, & b > 0 \\ -|a|, & b < 0 \end{cases}$$

即把 $b$ 的符号转移到 $a$ 的绝对值上。

## 思路

一行逻辑：取 $a$ 的绝对值，若 $b<0$ 则取负。注意 $a$ 可能为负、$b$ 的正负决定符号；用 `long long` 读入避免边界问题。

## 复杂度

- 时间 $O(1)$,空间 $O(1)$。

## 参考代码（C)

```c
#include <stdio.h>

int main(void) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long r = a >= 0 ? a : -a;
    printf("%lld\n", b > 0 ? r : -r);
    return 0;
}
```
