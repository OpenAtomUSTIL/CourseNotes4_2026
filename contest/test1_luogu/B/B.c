#include <stdio.h>

int main(void) {
    int s1 = 0, s2 = 0, s3 = 0, x;
    for (int i = 0; i < 8; i++) { scanf("%d", &x); s1 += x; }
    for (int i = 0; i < 4; i++) { scanf("%d", &x); s2 += x; }
    for (int i = 0; i < 3; i++) { scanf("%d", &x); s3 += x; }

    int ans = s1;
    if (s1 >= 80) {
        ans += s2;
        if (s2 >= 40) ans += s3;
    }
    printf("%d\n", ans);
    return 0;
}
