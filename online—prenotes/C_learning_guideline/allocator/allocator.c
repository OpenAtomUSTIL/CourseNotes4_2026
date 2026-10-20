#include <stdio.h>
#include <stdlib.h>




/**
 * function pointer  
 * 
 * 1. 复习 函数指针和指针函数   
 * 2. 内存申请模块 
 */
// char add(int a ,char b ){
//     return a + b;
// }
// char (*名字) (int, char);

/**
 * 1. 看函数有没有返回值 
 * 2. 指针先写括号和名字
 * 3. 参数的数据类型
 */

// 文件 
// int main(){
//     // 指针数组 一个索引 
//     // 1.文件操作需要一个句柄  
//     FILE *file = fopen("test.file","w");// write  read append
//     if(file == NULL){
//         printf("fuck");
//         // exit(1);
//     }
//     fprintf(file,"hello world!");
//     fclose(file);
//     return 0;
// }    // 申请内
// // offset 


// 内存分配 


int main(){
    int arr[4] = {1,2,3,4};// 

    //  5  * 4  = 20 int
    // int n = 5; 
    // int *p = (int*)malloc(sizeof(int)*n);// 操作地址 
    // // malloc 
    // if(p == NULL){
    //     printf("error allocating the memory!\n");
    //     return 1;
    // }
    // for (int i = 0; i < n; i++){
    //     arr[i] = (int)(i + 1)*10;// 10 20 30 40 50 
    // }
    // for (int s = 0; s < 10 ; s++){
    //     printf("arr[%d] is  %d \n",s,arr[s]);
    // }
    // free(p);
    // realloc // 重新分配  
    // calloc  // 延长。
    // 初始化指针  int* p = NULL;
    char *c = (char*)malloc(sizeof(char) * 4);// 用一个指针申请了4个字节长度的内存  
    if (c == NULL){
        printf("error !\n");
        return 1;
    }
    for (int i = 0; i < 4; i++){
        c[i] = (char)(65+i); // A B C D  
    }// 赋值  65 
    for (int i = 0; i < 4; i++){
        printf("c[%d] is %c\n",i,c[i]);
    }

}

// 用malloc 给 char arr[4] 的字符数组申请内存。
//赋值可以用ascii码来完成 