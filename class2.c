/*
日期: 2026-09-22
时间：19:30-21:30
第二节课
授课：听小昕碎碎念
记录：凡尘
*/

#include<stdio.h>

int main(){
    /*
    一、浮点型
        float: 4字节，精度6位
        double: 8字节，精度15位
        long double: 12字节，精度19位
        %f: 输出浮点型，默认保留6位小数(float和double都可以使用)
        %.nf: 输出浮点型，保留n位小数
        %lf: 输出double类型（long double类型也可以使用）
        %Lf: 输出long double类型
        注： 会四舍五入
            .f默认.0f，同样四舍五入
    */
    float a = 3.14159265358979323846; //定义float类型变量a
    printf("a = %f\n", a); //输出a = 3.141593
    printf("a = %.10f\n", a); //输出a = 3.1415926536
    double b = 2.71828182845904523536; //定义double类型变量b
    printf("b = %lf\n", b); //输出b = 2.718282
    printf("b = %.lf\n", b); //输出b = 3

    double c = a/b;
    printf("c = %lf\n", c); //输出c = 1.155727
    
    //二、输入流scanf
    //输入必须带有取地址符 &
    int age;
    printf("请输入你的年龄: ");
    scanf("%d", &age); //输入年龄
    printf("你输入的年龄是: %d\n", age); //输出输入的年龄、

    /*
    三、复合赋值运算符
        +=、-=、*=、/=、%=
        自增运算符：++，自减运算符：--
        前置自增自减 ++a，--a
        后置自增自减 a++，a--
    */
    int x = 10;
    x += 5; //等价于 x = x + 5
    printf("x = %d\n", x); //输出x = 15
    printf("x = %d\n", x++); //输出x = 15，x自增1
    printf("x = %d\n", ++x); //输出x = 17
    printf("x = %d\n", --x); //输出x = 16，
    printf("x = %d\n", x--); //输出x = 16
    printf("x = %d\n", x); //输出x = 15

    /*
    四、判断运算符
        ==、!=、>、<、>=、<=
        逻辑与&&，逻辑或||，逻辑非!
        1为真，0 为假
    */
    printf("%d %d",5>3,5==3); //输出1 0

    /*
    五、循环语句
        for循环
            for(初始化表达式; 条件表达式; 更新表达式){
                循环体语句;
            }

        while循环
            while(条件表达式){
                循环体语句;
            }

        do-while循环
    */
    //eg1
    for(int i=0; i<5; i++){
        printf("%d\n ", i);
    }
    //eg2
    int j=0;
    for(; j<5; j++){
        printf("%d\n ", j);
    }
    //eg3
    int k=0;
    for(; k<5;){
        printf("%d\n ", k);
        k++;
    }
    //eg4
    int m=0;
    for(;;){
        if(m<=5){
            break; //跳出循环
        }
        printf("%d\n ", m);
        m++;
    }
    //eg5
    int n=0;
    while(n<5){
        printf("%d\n ", n);
        n++;
    }

    return 0;
}