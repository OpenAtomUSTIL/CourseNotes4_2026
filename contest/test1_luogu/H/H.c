#include <stdio.h>

int main(void) {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long r = a >= 0 ? a : -a;
    printf("%lld\n", b > 0 ? r : -r);
    return 0;
}
