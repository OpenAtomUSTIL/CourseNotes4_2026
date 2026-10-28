#include <stdio.h>

int main(void) {
    int n;
    char s[60];
    scanf("%d %s", &n, s);
    for (int i = 0; s[i]; i++)
        s[i] = 'a' + (s[i] - 'a' + n) % 26;
    printf("%s\n", s);
    return 0;
}
