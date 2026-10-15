// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>


// int main(){
//     // int a = 10;
//     // // while (1){
//     // //     a++;
//     // //     printf("a 在递增  %d\n",a);
//     // // }
//     // for(a = 0 ; ;a++ ){
//     //     printf("a 在递增  %d\n",a);
//     // }

//     // srand(time(NULL));
//     // int a = rand() % 10;
//     // // printf("a = %d\n",a);
//     // int guess = 0;
//     // printf("enter the number : \n");
//     // int i = 0;
//     // while(1){
//     //     i ++;
//     //     scanf("%d",&guess);
//     //     if(guess < a){
//     //         printf("这是第 %d 次 循环", i);
//     //         printf("数字比较小，重新猜! \n");
//     //         continue;
//     //         printf("你好菜啊 \n");
//     //     }else if(guess > a) {
//     //         printf("这是第 %d 次 循环", i);
//     //         printf("猜大了\n");
//     //         continue;
//     //         printf("你好菜啊 \n");
//     //     }
//     //     else{
//     //         printf("猜中了 你真棒 !\n");
//     //         break;
//     //     }
//     // }
//     // continue; 

//     // do while 
//     // int i = 11;
//     // do{
//     //     i++;
//     //     printf(" i = %d\n",i);
        
//     // }while(i < 10);

//     // 
//     // for(int i = 0; ;i++){
//     //     printf("i == 10 是否为真  结果是 : %d\n",i == 10);
//     // }
//     // int a  = 10;
//     // while(a < 11){
//     //     printf("11吗\n");
//     // }


// }





#include <stdio.h>

// 无返回值函数 
// 有返回值函数 

// void hello();
// 实际参数和形式参数 
// int hello = 10;

// void add(int a, int b){
//     
//     int c = a + b;
//     printf("c = %d\n",c);
// }

// int add(int a,int b ){
//     printf("add函数被调用了 !\n");
//     printf("add的结果已经被addition 拿到了\n");
//     return a+b;
// }

// int minus(int a,int b){
//      printf("minus函数被调用了 !\n");
//     printf("minus的结果已经被addition 拿到了\n");
//     return a-b;
// }

// void hello();
// 函数可以定义在主函数的上面 ，也可以是下面
// 如果函数定义在了主函数下面，我需要在主函数的上面添加声明
/*
    声明就是从函数的类型开始到函数的小括号结束复制 c+v
    没有返回值的话，执行完语句就会结束
    如果有返回值你需要处理返回值 
    两种方式 1. 定义一个和返回值类型相同的变量 来接返回值
            2. 直接输出返回值
// */
// 
// int power(int a,int b);
// int main(){
//     int a = 2,b = 5;
//     // printf("")
//     printf("%d\n",power(a,b));
// }

// void hello(){
//     printf("hello\n");
// }

// 递归就是函数自己调用自己 

// int function(int a){
//     int i = 0;
//     printf("这个函数正在调用中 调用次数为 %d\n",i);
//     if(a == 0){
//         return 0;
//     }
//     return function(a-1);
// }

// int  fab(int n){
//     if(n < 0){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }
//     return fab(n-1)+fab(n-2);
// }

// int power(int a,int b){
//     if(b == 1) return a;
//     return power(a,b-1)*a;
// }
// main  a 。 b 
// 2 3  (///)*2
// 2 2  power(2,1) *2 *2
// 2 1  2 * 2 * 2 = 8




// fab(10) -> fab(9) +  fab(8)
// fab(9) -> fab(8) + fab(7)
// fab(8) -> fab(7) + fab(6)

#include <stdio.h>
int main(){
    // int a  = 0;
    // int float  char 
    // // printf("%d",a);
    // printf("     %c",'c');
    // int b = 0 ,c;
    // scanf("%d %d",&b,&c);
    // getchar();
    // printf("%d, %d",b,c);

    // + - * / % = 
    // printf("%d",5%2);

    // += -= /= %=
    // <<  >>  & | ^  
    // ！ && ||  
    int a = 0;
    // if(a > 0){
    //     printf("%d\n",a);
    // }else if(a == 0){
    //     printf("a = 0");
    // }else{
    //     printf("< 0");
    // }

    switch(a){
        case 0 :
            printf("0\n");
            break;
        case 1 : 
            printf("1");
            break;
        case 2 : 
            break;
    }
}



