#include <stdio.h>

// 指针  
//1. 指针是地址 
//2. 指针变量是啥  一个变量  存的值是 地址 int a = 4  int *p = &a;
// 3、swap(int a, int b) {int temp = a ; a = b; b = temp; }// 
// 值 会存在地址当中 必须要换地址 才能完成彻底的交换 
//  作用域 - 生命周期  HP 生命值
// 结构体 
// 编程语言  数据的类型  - 用代码来描绘生命 
// 你需要能够描述清楚现实事物的属性。
//
/**
 * int long longlong  
 * float double long double  
 * char 
 * bool 
 */
// 学生管理系统 
// 语法 
// 缩写 起别名  
// 床 床有多高 多宽 
// typedef long long ll;
// struct Bed {
//     double height;
//     double width;
// };
// typedef struct Student{
//     char *name;
//     int score;
//     char *gender;
// }S;
// int main(){
//     // 自定义类型 
//     S stu;
//     //单个进行赋值 
//     stu.name = "孙李浩民";
//     stu.score = 20;
//     stu.gender = "沃尔玛塑料袋";
//     printf("student stu的name是 %s, stu的 score 是 %d,stu的gender是%s\n",stu.name,stu.score,stu.gender);

//     struct Student s2 = {
//         s2.name =  "张三",
//         s2.score = 20,
//         s2.gender = "男",
//     };
//     printf("student s2的name是 %s, s2的 score 是 %d,s2的gender是%s\n",s2.name,s2.score,s2.gender);

//     ll one = 100000001;
//     printf("one's value is %lld",one);
    
// }

// // 数组 
// int main(){
//     int arr[4] = {1,2,3,4};
    //arr 数组表示的是整个数组在内存当中的首地址  
    // 数组在内存当中是连续存储的。  arr =  一个指向了arr[0]的指针  &arr[0]
    // printf("arr is %p ==  %p\n",arr,&arr[0]);
    // 用指针来对数组进行遍历 
    // 对指针进行加减 运算  取决于
    // 步长 指针指向的类型的长度 
    // 对指针进行加减就会移动对应个数的步长。
    // printf("arr +1 %p\n",arr + 1);
    // int *p = arr;
    // for(int i = 0; i < 4; i++){
    //     printf("当前指针对应的值 是 %d\n",*p);
    //     p++; 
    // }

    //----------------------------------------------------
    // 数组的指针 
    // int *p[4] = arr;
    // int a = 1, b = 2, c = 3 , d = 4;
    // // 一个都是指针元素的数组 
    // // 需求是 四个变量的地址存到一个数组里 ，需要四个地址 数组里放的都是地址。
    // int *a1 = &a;
    // int *b1 = &b;
    // int *c1 = &c;
    // int *d1 = &d;
    // int *p[4] = {a1,b1,c1,d1};
// }


/**
 * ------------------------------------------------------------------------------
 * function 
 */
// void (*meatPtr) (void)
void Meat(){
    printf("我 今天吃了牛排 !\n");
    printf("function pointer so hard !\n");
}

void Vegan(){
    printf("佐餐是 两根烤竹笋 \n");
    printf("沈阳真冷 好难过 !\n");
}
// 函数需要指针  函数指针 

// 指针    
/**
 *  - 指针需要有*  
 *  - 指针指向的是一个函数 函数是否存在参数 
 *  - 函数有没有返回值 
 *  void 
 * int swap(int a,int b) - >  int (*swapPtr) (int,int);
 */
void WhatADay(    void (*MeatPtr) (void),   void (*VeganPtr)(void)        ){
    MeatPtr();
    VeganPtr();
}

char* func(){
    char arr[100] = {"zhangsan"};// 9   8  '\0' 
    char c = 40;
    printf("c = %c\n",c);
    char *p = arr;
    return p;
} 

// 
int main(){
    void (*MeatPtr)(void) = Meat;
    void (*VeganPtr)(void) = &Vegan;
    WhatADay(MeatPtr,VeganPtr);
/**
 * 隐式转换  
 *  
 */

//     long l  = 10;
//     printf("%f",(float)l);
//     // 强制转换 
// }

// 指针函数 
// 让你实现一个函数 功能是返回一个数组、返回一个字符串 
    func();

}
/**
 *  func1  : int getNumber(int a,int b);
 *  func 2 : char getChar(char c,char m);
 * 把这两个函数声明对应的函数指针写出来即可 
 *  
 */

int (*GN) (int,int);
char (*GC)(char,char);