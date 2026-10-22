#include <stdio.h>
#include <stdlib.h>
// int  a = 4;

// char* changeA(char* a){
//     // a  值传递 一个值的拷贝 复制品 
//     a = "我已经不是从前的我了";// swap  // 函数开始 复制开始 函数结束 生命周期结束 
//     printf("%s\n",a);
//     return a;
// }//



// int main(){
    // double a = 10;
    // double *p = &a;
    // printf("%d",sizeof(p));
    // int b  = 4;
    // int arr[4] = {1,2,3,4};
    // int *m = arr;
    // printf("m的地址 %p ==  arr 的地址 %p\n",m,arr);
    // static char* a  ="初始化字符串";// 全局变量的生命周期等于程序的生命周期 
    // a = changeA(a);
    // // changeA(a);
    // printf("%s\n",a);//全局
    // 你现在要写一个空调遥控器 
    /**
     * 1. 制冷
     * 2. 制热 
     * 3. 湿度 
     * 4. 调节温度 
     * 
         // switch 指针数组 :
            case  1 -> 功能函数 
            case   2
     */
    // const int a = 4;
    // a = 45;//左值和右值 
    // 指针 
    // static 静态的

    // struct 

// }// 作用域 
// 生命周期 变量就会有生命 血条 

// typedef struct School{
//     char *student;
//     char *depart;// 不同部门
// }SUT,*sut;

// int main(){
//     struct School  *s;

//     // SUT sut;
//     s -> student = "李四";
//     s -> depart = "软工19班"; // 结构体指针去访问内部属性应该用 -> 
//     // . 
// }
// Union

typedef union sum
{
    /* data */
    long  s; // 8
    double b;// 8
    char a;// 1
}s ;// int  
// 调用的时候只能访问一个 
// 地址 共用体的分配规则  
// 取 属性当中 最长的变量类型来分配 取最小公倍数。

/**
 * 结构体内存对齐。
 * 
 */

int main(){
    // FILE *p = fopen("happy.foo","r");
    
    // fprintf(p,"\n 嘿 你看空了一行 ！ \n");
    // fclose(p);
    s unit ;
    printf("sizeof unit is %lu\n",sizeof(unit));



    // 操作文件需要有 句柄 
    //  选择打开文件的模式  - w  - r  - a  
    // malloc  堆和栈  KB MB 

    // void *malloc(size_t size);// 无类型的指针  字符串末尾是 \0 
    // int n ;
    // scanf("%d",&n);
    // getchar();
    // char *p = (char *)malloc(n * sizeof(char));
    // if( p == NULL){
    //     printf(" fucking shit !\n");
    // }
    // // 字符串的最后会有一个不可见字符 \0
    // printf("the addr is %p\n",p);
    // scanf("%s",p);// 指针 地址 -  &  char ** 指的是 指针变量的变量地址 
    // // 指针变量  地址(指针 )  变量  
    // printf("the input line is %s\n",p);
    // free(p);
}   

/**
 * C - cpp python 
 * java  
 * 编程范式。 
 * 面向过程  会强调 发生的过程 
 * 面向对象  人 对象 事发生在哪个对象身上 是谁做的这件事 然后才是这件事怎么干；
 * 
 */