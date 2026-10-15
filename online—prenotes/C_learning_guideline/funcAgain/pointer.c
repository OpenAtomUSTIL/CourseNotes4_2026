#include <stdio.h>

int main(){
//     int n = 4;
//     printf("the value of n is %d\n",n);
//     printf("the value of &n is %d\n",&n);
//     int *p = &n;// 指针变量 -- 取地址(取地址符) 
//     printf("the value of  p is %d", *p);// 对指针进行解引用  把地址存的值 反应出来
    /**
     * 1. 什么叫指针 - 地址  指针即地址 
     * 2. 定义的时候 类型是 Type * ;  调用的时候 如果想看到变量的值 就对它解引用 *变量名 
     * 3.     给指针变量赋值的时候 要注意加取地址符。  表示取得某个变量的地址 然后赋值给指针变量。
     */

    /**
     *  double b = 12;
     * 用指针表示之后输出。
     */
    double b = 12;
    printf("b 的值是 %lf\n",b);
    printf("b 的指针的值是 %p\n",&b);
    double *d  = &b;
    printf("*d的值 是 %p\n",d);
}