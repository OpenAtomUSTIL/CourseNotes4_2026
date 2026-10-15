#include <stdio.h>

/**
 * 类型  名字 ;
 * 指针 int *  nun;
 */
// 函数 
/**
 *  有返回值 
 *  无返回值 void 
 */
// void PrintHello(int a, int b){
//     int c = a  + b;
// }
// // 有返回值的函数 
// //  a + b = c  return c;
// int add(int a,int b){
//     return a + b;
// }

// int main(){
//     // PrintHello(4,5);// 
//     printf("%d===",add(4,5));
//     // 1. 直接打印出来 2. 就是找一个变量来接这个值
//     int c = add(10,5);// c = 10 + 5 = 15
//     printf("%d",c);
// }

//结构体

/**
 * 数据类型 data type 
 * int float double long char string 
 * 对生活的事物进行抽象 
 */
// 自定义类型 你统计一下你们这届所有学生的期末考试成绩
// typedef struct Student{
//     char* name;// string  字符串 姓名 
//     int age;// 年龄
//     int score;// 分数 
// }Student;

// int main(){
//     Student xiaoyang;
//     xiaoyang.name = "xiaoyang";
//     xiaoyang.age = 20;
//     xiaoyang.score = 90;
    
// }

// 编程范式 
// #include <stdio.h>
/**
 * 张三今天中了一百万  想要吃烧烤喝啤酒。
 */
// // 范式 - 规范的形式。
// void GetOneMillonDollars(char* name){
//     printf("%s今天中了一百万\n",name);
// }
// //吃码农烧烤
// void EatCoderBBQ(char* name){
//     printf("然后 %s 去吃了码农烧烤\n",name);
// }
// // 想喝啤酒
// void DrinkBeer(char* name){
//     printf("同时 %s也喝了啤酒 \n",name);
// }
/**
 * %d 整型变量  %f 指的是浮点型 %c 指的是字符  
 * %s指的是字符串
 * printf("%d",) 
 *  
 * 循环 + 变量 + 条件分支 函数  类  数组 字符串 泛型
 */
// int main(){
//     char* zhangsan = "zhangsan";
//     GetOneMillonDollars(zhangsan);
//     EatCoderBBQ(zhangsan);
//     DrinkBeer(zhangsan);
// }

#include <stdio.h>
// 攒代码 内存控制记下来
// OOP object oriented programming version
// objective c / swift 
// 纯模拟
typedef struct Person Person;
struct Person {
    char* name;
    void(*GetReward)(Person*);// 得奖这件事。
    void(*Eat)(Person*);//吃这件事。
    void(*Drink)(Person*);
};// 类型
void GetOneMillonDollars(Person *person){
    printf("%s今天中了一百万\n",person->name);
}
void EatCoderBBQ(Person* person){
    printf("然后 %s 去吃了码农烧烤\n",person->name);
}

void DrinkBeer(Person* person){
    printf("%s在码农烧烤要了三杯啤酒 \n",person->name);
}
int main(){
    Person zhangsan;// 实例 实体
    zhangsan.name = "张三";
    zhangsan.GetReward = GetOneMillonDollars;
    zhangsan.Eat = EatCoderBBQ;
    zhangsan.Drink = DrinkBeer;

    //-----------------

    zhangsan.GetReward(&zhangsan);
    zhangsan.Eat(&zhangsan);
    zhangsan.Drink(&zhangsan);
}

/**
 *  关系型数据库 关系 + 表 根据不同关系建表
 *  非关系型数据库 kv键值对。
 *  
 * 针对不同类型的数据做特化处理
 *  Prometheus 普罗米修斯 时序数据库 专门用来处理时序数据 时间戳 
 *  向量数据库 AI  RAG 检索增强生成。vector 
 *  
 */