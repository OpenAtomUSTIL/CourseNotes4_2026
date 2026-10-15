// #include <stdio.h>

// // typedef struct Person{
// //     int age;
// //     int birth;
// //     face f;
// // } x ;

// // typedef struct Face{
// //     int nose;
// //     int ear;
// //     int mouth;
// // }face;

// typedef struct Number{
//     int a;
//     long b;
//     double d;
//     char c;
// }num;// 4  8 8 1

// int main(){
//     // struct Person p;
//     // p.age = 18;
//     // p.birth = 902;
//     // printf("p的 年龄是 %d\n",p.age);
//     // printf("p的 生日是 %d\n",p.birth);

//     // x b;
//     // b.age = 15;
//     // b.birth = 19;
//     // printf("%d %d \n",b.age,b.birth);
//     // x c;
//     // c = p;
//     // printf("c.age 的值是 %d\n",c.age);

//     // // 一个人叫 yxz 
//     // x yxz;
//     // yxz.f.ear = 0;
//     // yxz.f.mouth = 0;

//     // printf("sizeof(num) = %lu\n",sizeof(num));
//     printf("%lu",sizeof(num));
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(){
//     // char *str1 = "cdef";
//     // printf("%s",str1);// s

//     // for (int i = 0; i < 4; i++){
//     //     printf("%c\n",(*str1 + i));
//     // }

//     // char strArr[5][100] = {
//     //     "zhangsan",
//     //     "wangwu",
//     //     "lisi",
//     //     "zhaoliu",
//     //     "sun8",
//     // };

//     // for (int i = 0 ;i < 5; i++){
//     //     char *p = strArr[i];
//     //     printf("%s\n",p);
//     // }
//     // char *str3 = "陈涵文爱吃香蕉";
//     // char *test = "english";
//     // int n = strlen(test);
//     // printf("%d",n);
//     // char *t2 = (char)malloc(10* sizeof(char));
//     // // t1 -> t2;
//     // // strcpy
//     // strcpy(t2,test);
//     // printf("%s",t2);

//     char *pa = "you like java";
//     char *pb = "I LOVE JOKER";
//     // pa == pb 
//     int b1 = strcmp(pa,pb);
//     printf("%d",b1);

    
// }   

#include <stdio.h>

int main(){
    // char name[3][100]= {
    //     "hellofuck",
    //     "fuckyou",
    //     "fuckbitch"
    // };
    // char *p = name[0];
    // printf("%s",*p);

    int arr[] = {1,3,43,5,6,7};
    int *p = &arr[3];
    int *p2 = &arr[4];
    printf("%lu",sizeof(p2-p));
}