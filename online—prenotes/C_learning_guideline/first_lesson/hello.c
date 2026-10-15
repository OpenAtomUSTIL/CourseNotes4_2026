#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void InBinary(int num){
    for(int i = 31; i >= 0; i--){
        int bit = (num >> i) & 1;
        printf("%d",bit);
    }
}

int main(){
    // printf("short类型的大小是 : %lu\n",sizeof(long));
    // printf("int 类型的大小是 : %lu\n",sizeof(int));
    // printf("long 类型的大小是 : %lu\n",sizeof(long));
    // printf("long long 类型的大小是 : %lu\n",sizeof(long long));
    
    // printf("float 类型的大小是 : %lu\n",sizeof(float));
    // printf("double 类型的大小是 : %lu\n",sizeof(double));
    // printf("long double类型大小是 : %lu\n",sizeof(long double));

    // printf("char 类型的大小是 : %lu\n",sizeof(char));

    // int a = -10;
    // unsigned int m = -100;
    // printf("%u",m);
    // int a = 2;
    // short b = 4;
    // printf("a + b = %d,占字节大小为 %lu\n",a + b,sizeof(a+b));
    // printf("%lu\n",sizeof(a));
    // printf("%lu\n",sizeof(b));

    // double m = 3.141242;
    // float c = 3.122425;
    // printf("m + c = %lf,sizeof = %lu",m+c,sizeof(m+c)); 
    
    
    // int a = 5;
    // int b = 5;
    // printf("a > b? : %d",a < b);
    // printf(" a和b相等吗？ %d", a == b);

    // int m = 10;
    // int n = 5;
    // printf("%f\n",(double)m/n);

    // char f = '5';
    // int c = (int)f;
    // printf("%d\n",c);

    // 都是 1 才是1  1位是  0 就是 0   11

    // int a = 7;// 111 
    // int b = 3;//  11   010 

    // printf("A & b 的结果是%d\n", a & b);  
    // InBinary(a);
    // printf("\n");
    // InBinary(b);
    // printf("\n");
    // printf("a | b = %d\n",a | b);

    // printf("a ^ b = %d\n",a^b);
    // int num = a ^ b;
    // InBinary(num);
    // printf("\n");
    // int n1 = ~(a ^ b);
    // printf(" ~a = %d\n",~(a^b));
    // InBinary(n1);
    // printf("\n");
    // //0  111
    // //0   11
    // //0   100
    // //1  1011 
    
    // printf("%d\n",(a,b));
    // int m = a + b;// 10
    // int c = a * b;// 21
    // printf("%d\n",(a,b,m,c));



    // for(int i = 0; i < 10; i++)
    // {
    //     printf("i love you forever!\n");
    // }
    // int m = 0;
    // while(m < 10){
    //     printf("while is running %d\n",m++);
    // }
    // m = 0;
    // do{
    
    //     printf("do while is running %d\n",(m++)+1);
    // }while(m < 10);
    // srand(time(NULL));
    // int guessNum = rand()%10;
    // while(1)
    // {
    //     int n = 0;
    //     scanf("%d",&n);
    //     if(n > guessNum){
    //         printf("bigger again !\n");
    //         continue;
    //     }else if (n < guessNum){
    //         printf("smaller again !\n");
    //         continue;
    //     }else {
    //         printf("congratulations !\n");
    //         break;
    //     }
    // }


}