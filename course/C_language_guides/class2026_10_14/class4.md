# 第四节课

**日期**：2026-10-14
**时间**：19:30-21:30  
**授课**：听小昕碎碎念  
**记录**：凡尘

## 课程内容

### 一、函数

#### 1. 函数的定义

```c
返回值类型 函数名(参数类型 参数名, ...){
    函数体;
    return 返回值;
}
```

#### 2. 函数的类型

**按照返回值类型分为：**
- **有返回值函数**：函数体中有return语句，且return后面有返回值
- **无返回值函数**：函数体中没有return语句，或者return后面没有返回值

**按照参数类型分为：**
- **有参数函数**：函数定义时有参数列表
- **无参数函数**：函数定义时没有参数列表

#### 3. 函数示例

**eg1: 无参数无返回值函数**
```c
void halloworld(){
    printf("Hello World!\n");
}
```

**eg2: 有参数无返回值函数**
```c
void getMax(int a, int b){
    printf("最大值是: %d\n", (a > b) ? a : b);
}
```

**eg3: 无参数有返回值函数**
```c
int getnum(){
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    return num;
}
```

**eg4: 有参数有返回值函数**
```c
int sum(int a, int b){
    int result = a + b;
    return result;
}
```

#### 4. 函数的声明

```c
返回值类型 函数名(参数类型 参数名, ...);
```

#### 5. 函数的调用

```c
函数名(实参1, 实参2, ...);
```

#### 6. 函数的返回值

```c
return 返回值;
```

#### 7. 函数的参数传递方式

- **值传递**：实参传递给形参的是实参的值，形参在函数中改变不会影响实参
- **引用传递**：实参传递给形参的是实参的地址，形参在函数中改变会影响实参

#### 8. 函数嵌套

函数在函数体内调用其他函数

```c
int getMax2(int a, int b){
    return (a > b) ? a : b;
}

int getMax3(int a, int b, int c){
    return getMax2(getMax2(a, b), c);  // 嵌套调用
}
```

#### 9. 函数的递归调用

函数直接或间接地调用自身

```c
int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n - 1);  // 递归调用
}
```

### 二、变量

#### 1. 变量的定义

```c
数据类型 变量名;
```

#### 2. 变量的初始化

```c
数据类型 变量名 = 初始值;
```

#### 3. 变量的作用域

- **局部变量**：在函数体内定义的变量，作用域为函数体内
- **全局变量**：在函数体外定义的变量，作用域为整个文件

#### 4. 变量的生命周期

- **局部变量**：在函数调用时创建，函数调用结束时销毁
- **全局变量**：在程序运行时创建，程序结束时销毁

## 代码示例

```c
#include<stdio.h>

// 无参数无返回值函数
void halloworld(){ 
    printf("Hello World!\n");
}

// 有参数无返回值函数
void getMax(int a, int b){
    printf("最大值是: %d\n", (a > b) ? a : b); // 三目运算符
}

// 无参数有返回值函数
int getnum(){
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    return num;
}

// 有参数有返回值函数
int sum(int a, int b){
    int result = a + b;
    return result;
}

// 函数嵌套示例
int getMax2(int a, int b){
    return (a > b) ? a : b;
}

int getMax3(int a, int b, int c){
    return getMax2(getMax2(a, b), c);  // 嵌套调用
}

// 函数递归调用示例
int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n - 1);  // 递归调用
}

int main(){
    // 无参数无返回值函数
    halloworld();
    // 有参数无返回值函数
    getMax(10, 20);
    getMax(30, 15);
    // 无参数有返回值函数
    int number = getnum();
    printf("您输入的数字是: %d\n", number);
    // 有参数有返回值函数
    int res = sum(5, 3);
    printf("5 + 3 = %d\n", res);
    // 函数嵌套
    int max = getMax3(10, 20, 15);
    printf("三个数中最大值是: %d\n", max);
    // 函数递归调用
    int fact = factorial(5);
    printf("5! = %d\n", fact);
    return 0;
}
```

## 运行结果示例

```
Hello World!
最大值是: 20
最大值是: 30
请输入一个整数: 42
您输入的数字是: 42
5 + 3 = 8
三个数中最大值是: 20
5! = 120
```