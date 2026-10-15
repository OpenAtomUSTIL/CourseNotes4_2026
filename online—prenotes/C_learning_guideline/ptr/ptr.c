// // 指针 
// #include <stdio.h>

// // 本次内容不太好理解 可以回去再看看代码 
// // 指针数组和数组指针可以放到下次来讲
// int main(){
//     // int a = 20;
//     // int *p = &a;
//     // char c = 'c';
//     // char *cp = &c;
//     // printf("%p\n",p);
//     // printf("%d\n",*p);
//     // printf("%p\n",cp);
//     // printf("%p\n",++cp);
//     // // ptr 步长
//     // p++;
//     // // 4
//     // printf("%p\n",p);

//     // int a = 10;
//     // int *c = &a; // c  a address
//     // int *m = &c; // m-> c -> a
//     // printf("%d",*m);

//     // int a = 20;
//     // int *p = &a;
//     // int *m = &p;
//     // printf("%p\n",p);
//     // printf("%p\n",*m);
//     // printf("%d\n",*p);

//     // int b = 20;
//     // int *m = &b;
//     // printf("%d\n",m);
//     // printf("%d",*(m+1));

//     // int arr[5] = {2,3,5,7,9};
//     // int *p = arr;
//     // // arr 
//     // for(int i = 0; i < 5; i++){
//     //     printf("%d",*(p+i));
//     // }
// }

// #include <stdio.h>

// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){

    // swap(&a,&b);
    // printf("a = %d b = %d",a,b);

    // int *m  = &a;
    // printf("%d",*m);// 10
    // printf("%d",m);//
    
    // int n = 10;
    // int *m = &n;
    // printf("%d\n",m);
    // printf("%d",m);
    // 2 + 1 -1 
// }

// 


// #include <stdio.h>

// int multi(int a,int b){
//     return a*b;
// }

// void goodmorning(){
//     printf("good morning sir!\n");
// }

// void goodNight(){
//     printf("good night sir! \n");
// }

// void *execute(void func()){
//     func();
// }

// // 同上，参数类型使用函数指针而不是 void*
// void runFunc(void (*func)()){
//     func();
// }

// void add(int a,int b){
//     printf("%d + %d = %d\n",a,b,a+b);
// }

// void subtract(int a,int b){
//     printf("%d - %d = %d\n",a,b,a-b);
// }

// void multiply(int a, int b){
//     printf("%d * %d = %d\n",a,b,a*b);
// }

// void divide(int a, int b){
//     printf("%d / %d = %d\n",a,b,a/b);
// }

// void showMenu(){
//     printf("简易计算器(整数版)\n");
//     printf("0.加法\n");
//     printf("1.减法\n");  
//     printf("2.乘法\n");  
//     printf("3.除法\n");
// }
// int main(){
//     // // 复习指针 
    // int a = 10;
    // int *p = &a;
    // // p的值就是 a的地址;
    // printf("%d\n",a);
    // printf("%p\n",&a);
    // printf("%p\n",p);
    // // 
    // printf("%d\n",*p);

    // int arr[4] = {1,2,3,4};
    // // 数组的指针 
    // for(int i = 0; i < 4; i++){
    //     printf("%p ",&arr[i]);
    //     printf("%d \n",*(arr+i));
    // }

    // printf("int 的长度是 %lu \n",sizeof(int));
    // printf("4个int的数组长度是 %lu\n",sizeof(arr));

    // printf("%p\n",arr);
    // printf("%p\n",&arr[0]);


    // int m = 10;
    // int *ptr = &m;
    // int **pptr = &ptr;
    // **pptr = 30;
    // printf("m = %d \n",m);
    // printf("*ptr =  %d \n",*ptr);
    // printf("*pptr = %d \n",*(*pptr));

    // 指针数组 
    // int a = 10;
    // int *p1 = &a;
    // int b = 20;
    // int *p2 = &b;
    // int c = 30;
    // int *p3 = &c;
    // int (**ap[3]) = {p1,p2,p3};
    // for(int i = 0; i < 3; i++){
    //     printf("%d ",*(*(ap+i)));
    // }


    // int **s = &ptr;
    // int *a1[3] = {pptr,s,ptr};
    // printf("pptr的地址是 %p\n",pptr);
    // printf("s的地址是 %p\n",s);
    // printf("ptr的地址是 %p\n",ptr);    
    // for(int i = 0; i < 3; i++){
    //     printf("指针数组 %d的结果 : %p\n",i,(a1+i));
    // }

    // // 函数指针 
    // // int (*ptr)(int ,int) = multi;
    // printf("%d",ptr(5,20));
    // execute(goodmorning);
    // execute(goodNight);
    // runFunc(goodNight);
//     showMenu();
//     int choices;
//     printf("enter your choice!\n");
//     scanf("%d",&choices);
//     int a,b;
//     printf("接下来，输入你想算的整数吧\n");
//     scanf("%d %d",&a,&b);
//     void (*operations[4])() = {add,subtract,multiply,divide};
//     operations[choices](a,b);
// }


// void sayHello() {
//   printf("Hello from the callback!\n");
// }

// void runCallback(void (*callback)()) {
//   printf("Before calling the callback...\n");
//   callback();
//   printf("After calling the callback.\n");
// }

// void *func(void f()){
//     f();
// }

// int main() {
//   runCallback(sayHello);
//   func(sayHello);
//   runCallback(sayHello);
//   return 0;
// }


