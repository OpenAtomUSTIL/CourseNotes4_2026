#include <stdio.h>

int main(void) {
    long long a;
    scanf("%lld", &a);
    if (a < 0) a = -a;
    if (a == 0) printf("1\n");   // sin(0) = x^2 只有 x = 0
    else        printf("%lld\n", 2 * a);
    return 0;
}
