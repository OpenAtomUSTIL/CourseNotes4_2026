// 1. 小鱼的游泳时间
/*
    题目比较简单类似小学数学，可以分开算也可以整体来算，这里只给出一种参考
    这里的写法是把所有都同意成分钟后，f-e是分钟时间差值，用差值/60得到的整数就是小时
    对60取余得到的值就是剩下的分钟 
*/
// #include <stdio.h>

// int main(){
//     int a,b,c,d,e,f;
//     scanf("%d %d %d %d",&a,&b,&c,&d);
//     e = a * 60 + b;
//     f = c * 60 + d;
//     printf("%d %d",(f-e)/60,(f-e)%60);
// }

// 2. 【深基4.例2】找最小值
/*
    两种思路 第一种思路一开始给一个比较大的数，然后后面只要遇到比这个数小的值
    就交换 一个循环结束之后剩下的就是最小的值了
*/
// #include <stdio.h>
// int main(){
//     int n = 0,num = 0;
//     scanf("%d",&n);
//     int min = __INT_MAX__;
//     for(int i = 0; i < n; i++){
//         scanf("%d",&num);
//         int temp = num;
//         if(min > temp){
//             min = temp;
//         }
//     }
//     printf("%d",min);
// }

// 3. [NOIP2004 普及组] 不高兴的津津
/*
    一个最大值为 8 初始化不开心的值是 0（因为如果没有就输出 0 ） 
    从周一到周日 如果上课总时间大于 最大值 不开心
    如果后一天比前一天更加不开心，那么就让max = 后一天上课总时间
    同时让最不开心那一天的值改成后一天就可以了
*/
// #include <stdio.h>
// int max = 8, maxErr = 0;
// int main(){
//     for(int i = 1; i <= 7; i++){
//         int t1,t2;
//         scanf("%d %d",&t1,&t2);
//         if(max < t1 + t2){
//             max = t1 + t2;
//             maxErr = i;
//         }
//     }
//     printf("%d",maxErr);
// }

