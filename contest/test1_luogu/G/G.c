#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    long long un = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        un += a + b - 8;
        sum += un;
    }
    printf("%lld\n", sum);
    return 0;
}
