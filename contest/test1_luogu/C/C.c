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
