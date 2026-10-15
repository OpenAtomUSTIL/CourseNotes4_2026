#include <stdio.h>

// git 教程  markdown



int main(){
    //打印hello world 
    //for 

    // g++ gcc clang clang++ 编译器 
    // Visual STudio IDE  继承开发的环境  编辑器 + 编译器+
    // 其他的测试组件 debug
    // 栈区
    // printf("hello world !\n");
    // for  while   
    // for(int i =0;i < 10; i++){
    //     printf("hello world !\n");
    // }
    // int a = 10;
    // while(a < 20){
    //     printf("hello world !\n");
    //     a++;
    // }
    // 定义变量 类型 + 名字  
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    // printf("size of the array is %lu\n",sizeof(arr));
    // 40/4 10
    // 遍历 
    // printf("array is %d\n",*arr); //地址  数组的名字  = 数组的头指针  = 数组第一个元素的地址 
    for (int i = 0; i < 10;i++){
        printf("第%d个元素是  %d\n",i,arr[i]);
    }
    // 数组索引  0  
    printf("arr[0] 是  %d\n",arr[0]);

    char* name[5] = {"小吴","小于","小黄","小刘","小王"};// 字符串  C no string only character 
    // 1. 定义 变量   类型 + 名字  
    // %s 
    for (int i = 0; i < 5;i++){
        printf("第%d个元素是 %s\n",i,name[i]);
    }
    int a;
    scanf("%d",&a);
    /**
     * 
     * 定义一个数组名字叫 days 
     * 存的内容是 星期的名字 星期一 - 星期日 
     * 遍历该数组
     */
}

