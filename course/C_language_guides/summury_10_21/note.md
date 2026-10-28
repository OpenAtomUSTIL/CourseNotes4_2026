## 计算机 

### 编程语言
语言是实现你想法的工具之一。 你需要先有想法
更需要是想清楚流程和流程中可能遇到的问题


### 专业课 
高数 线代  =  数学基础  积分学 + *线代* 
计算机方向的数学 = 离散数学 。 = 逻辑门  基本逻辑运算  

=== 学习 ！= 考试 ===
时间成本   学习成本
就业和考研
**11408**  数1 英1 
**22408** 
考上研究生    ||  去工作  

学术上 更多会了解原理  设计算法。 

工程上 问题导向 - 不会具体的要求你用特定方案解决问题 

**408**
- 计算机网络 
- 数据结构与算法 最推荐掌握 
- 计算机操作系统
- 计算机组成原理  最难



遇到问题 能够独立寻找解决方案 

我现在想写一个http server.
- 什么http 
- 怎么建立连接 
- 如果连接失败、 挂了 
问题导向。

## C 
本着希望各位掌握扎实的基础 
C==面向过程== 语言
物联网 - C  硬件 C 
`malloc`

### 编程范式 
- 面向过程
- 面向对象 
- 函数式编程
- 并发编程 

从来梳理一遍 

### 1. 变量
```C
int a;//
```

```js
var name ;// 
const name;
```

```py 
a = [];
```

弱类型语言除外  大多数语言都会需要
`类型 type` + 变量名 = 值`value`;

### 2. 输入输出

```C  
#include <stdio.h>
int main(){
    // 占位符  %d %s %f  %c character
    scanf("")//  format 格式 格式化 
    printf("hello world");
}
```

```java 
class Main{
    public static void main(String[] args){
        System.out.println("hello world");// 输入 
    }
}
```

### 条件控制 + 循环 

#### 如果... 会发生什么
if  
if else 
switch num
    case 1:
        printf();
        break;
    case 2: 
        printf();
    case 3:
        printf();
// switch 穿透
#### 在什么条件下，什么事情会一直发生

`loop`循环 
```C  
for(){

}
// 死循环
while(1){

}
```

### 函数 
函数定义 : 类型 + 名字
```C 
// 有返回值和无返回值 
void / int 
// 指针的移动 = 移动对应类型的步长 
// 步长 int *a  4 
int arr[4] = {1,2,3,4};
int *a = arr;
void foo(int *a,int size){
    for(int i = 0; i < size; i++){
        printf(" %d\n",*(a + i));
    }
}

int getMaxNumber(int a, int b){
    // 返回一个数 
    if (a > b){
        return a;
    }else if(a < b){
        return b;
    }else {
        return 1;
    }
}
```

### 数组 

#### 1.语法或者 定义 
```c 
// 长度为 4 的字符数组  foo 里面存 a b  c 
char * c =  {"abc"};
char * c {'a','b','c'};
// 字符数组长度最后一个是 '\0' 这是一个不可见字符
char c[4] = {a,b,c};

// 遍历 
// 循环  NULL
int i = 0; 
while(*c != NULL){
    printf("%c",*(c+i));
    i++;
}
```

### 内存分配 + 指针 
```C 
// 指针即地址 
// 指针和 指针变量  指针。
// 指针变量指的是 存着地址的变量
// 指针变量的长度是多少。- 8

```

#### 1. 指针的定义 

- 定义
- 长度 
- & *（）

int *p ;
*p;// 解引用。 
&p; // 取地址符。

##### 1.1 数组指针和指针数组 
```
// 数组名 名字 = 数组的首地址 

```
指针的数组  数组的元素是由指针组成的。

###### 1.2 指针函数 和函数指针。

- 指针函数 返回值是一个指针
  是真的需要返回一个指针还是说 返回的其实是某个类型的数组 
    矩阵转置 T traverse  
    <!-- int arr[][]
    for (){
        for(){

        }
    }  -->
1. 返回一个数组 
2. 返回一个字符串。 `char *`

- 函数指针 

1. 返回值类型
2. 有没有参数和参数的类型
3. （*指针名）

char *num (int *size, double length){}
char* (*p) (int*, double);

### `const`& `static`
const  constant 常量 
`const int a;`

## 结构体和文件 

### 什么叫结构体
// class   
```C 
// 类型很多 自定义类型

typedef struct School{
    char* student;
    char* depart;// 不同部门
}SUT;

int main(){
    struct School  s;
    SUT sut;
    sut.student
}
```
