// #include <stdio.h>

// int main(void) {
//     int best = 0, ans = 0;
//     for (int d = 1; d <= 7; d++) {
//         int a, b;
//         scanf("%d %d", &a, &b);
//         int t = a + b - 8;
//         if (t > best) { best = t; ans = d; }
//     }
//     printf("%d\n", ans);
//     return 0;
// }

#include<stdio.h>

int main(){
    int e = 0;
    int ans = 0;
    for (int i=1;i<=7;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        int t=a+b-8;
        if ( t > e ){
            e = t;
            ans=i;
        }
    }
    printf("%d",ans);
    return 0;

}