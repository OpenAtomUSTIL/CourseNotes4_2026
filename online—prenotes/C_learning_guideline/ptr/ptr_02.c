// 上次讲了指针基础 
// 今天要讲的东西会比较难以理解
// 1.先重新捋一下之前的内容
// #include <stdio.h>

// void  add(int a,int b){
//     printf("a + b = %d\n",a+b);
// }

// void  subtract (int a, int b){
//     printf("a - b =  %d\n" ,a-b);
// }
// void  multiply(int a,int b){
//     printf("a * b =  %d\n" ,a*b);
// }
// void  divide (int a,int b){
//     printf("a / b =  %d\n" ,a/b);
// }

// void showMenu(){
//     printf("0. 做加法 ！\n");
//     printf("1. 减法 ！\n");
//     printf("2. 乘法 ！\n");
//     printf("3. / 法 ！\n");
// }




// int main(){
    // // 1. 变量的地址 和 指针是什么 解引用和取地址的关系 
    // int a = 10;
    // // & 
    // printf("original addr is %d \n",&a);
    // int *p = &a;
    // printf("the content of p is %d\n",p);
    // // printf("%d",*p);
    // p++;
    // printf("%d",p);
    // char m = 'm';
    // char *c = &m;
    // printf("orginal c is  %d \n",c);
    // c++;
    // printf("after plus c is %d\n",c);
    // 2. 数组的指针 和 指针数组 

    // int arr[5] = {3,5,7,1,2};
    // // for(int i = 0; i < 5;i++){
    // //     printf("the arr[%d] is  %d \n",i,&arr[i]);
    // // }
    // int *s = arr;
    // printf("the ptr of the 1st element of array is %d\n",s);
    // // arr =  &arr[0]
    // for(int i = 0; i < 5; i++){
    //     printf("the arr[%d] is  %d \n",i,*(arr+i));  
    // }

    // int a = 10;
    // int *p1 = &a;
    // int b = 20;
    // int *p2 = &b;
    // int c = 30;
    // int *p3 = &c;
    // int (*p[3]) = {p1,p2,p3};
    // for (int i = 0; i < 3; i++){
    //     printf("%d ",*(*(p+i)));
    // }
    // 3. 函数指针  
    //  1) 指针调函数
    //  2) 函数调指针函数 
    //  3) 函数指针数组结合

    // int (*ptr)(int,int) = add;
    // printf("the value of ptr's function is %d\n",ptr(10,20));
    // printf("早上八点钟 ！\n");
    // Execute(printHello);
    // printf("\n");
    // printf("中午啦 ！\n");
    // Execute(printNoon);
    // printf("\n");
    // printf("中午啦 ！\n");
    // Execute(goodNight);

// }



// int main(){
//     int a = 0, b = 0;
//     scanf("%d %d",&a,&b);
//     showMenu();
//     int choice = 0;
//     printf("请输入选项 : \n");
//     scanf("%d",&choice);
//     void (*operations[4])() = {add,subtract,multiply,divide};
//     operations[choice](a,b);
// }
