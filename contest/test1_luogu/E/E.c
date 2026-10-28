#include <stdio.h>
#include <math.h>

#define EPS 1e-4

int main(void) {
    double H, S1, V, L, K;
    int n;
    scanf("%lf %lf %lf %lf %lf %d", &H, &S1, &V, &L, &K, &n);

    double t1 = sqrt((H - K) / 5.0);  // 落到车顶高度 K 的时刻
    double t2 = sqrt(H / 5.0);        // 落地的时刻
    double d1 = S1 - V * t1;          // t1 时刻车近端距原点的距离
    double d2 = S1 - V * t2;          // t2 时刻车近端距原点的距离

    int ans = 0;
    for (int i = 0; i < n; i++)
        if (d2 < i + EPS && i - EPS <= d1 + L) ans++;
    printf("%d\n", ans);
    return 0;
}

//课堂版本
#include <stdio.h>
#include <math.h>

int n;
double h,s1,v,l,k;

int max(int a,int b){
    // if (a > b)
    //     return a;
    // return b;

    return a > b ? a : b;
}

int min(int a, int b){
    return a < b ? a : b;
}

int main(){


    // t_max=h/5^0.5
    // t_min=(h-k)/5^0.5

    // s1-v·t
    // s1-v·t+l

    // s1-v·t_max<i
    // i<s1-v·t_min+l

    scanf("%lf %lf %lf %lf %lf %d",&h,&s1,&v,&l,&k,&n);
    double t_max = sqrt(h/5);
    double t_min = sqrt((h-k)/5);

    int i_begin = (int)(s1 - t_min * v + l);
    int i_end = (int) (s1- t_max * v);

    i_begin = min(i_begin,n);

    i_end = max (i_end , 0);

    printf("%d",i_begin-i_end);

    return 0;
}