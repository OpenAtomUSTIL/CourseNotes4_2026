# 第五节课

**日期**：2026-10-15
**时间**：18:30-21:30  
**授课**：听小昕碎碎念,USTIL实验室成员178  
**记录**：凡尘

## 课程内容

### 一、指针基础

#### 1. 指针的定义

指针是一个变量，用于存储另一个变量的地址。

```c
数据类型 *指针变量名;
```

**示例：**
```c
int a = 10;
int *p;     // 定义一个整型指针变量p
p = &a;     // 将a的地址赋值给指针变量p
```

#### 2. 指针的使用

- **访问指针所指向的变量的值**：`*指针变量名`
- **修改指针所指向的变量的值**：`*指针变量名 = 新值;`
- **获取变量的地址**：`&变量名`

#### 3. 指针的运算

**加减运算：**
- `指针变量 + 整数`：指针向后移动整数个单位
- `指针变量 - 整数`：指针向前移动整数个单位

**比较运算：**
- `指针变量1 == 指针变量2`：判断两个指针是否指向同一个地址
- `指针变量1 != 指针变量2`：判断两个指针是否指向不同的地址

#### 4. 指针的类型

| 类型 | 声明 |
|------|------|
| 整型指针 | `int *` |
| 字符型指针 | `char *` |
| 浮点型指针 | `float *` |
| 双精度型指针 | `double *` |

#### 5. 指针的注意事项

1. 指针变量**必须初始化**，否则会出现野指针
2. 指针变量的类型必须与所指向的变量的类型一致
3. 指针变量的运算必须在同一类型的指针之间

---

### 二、指针与数组

数组名就是数组首元素的地址，可以用指针来访问数组元素。

```c
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;          // 指针指向数组的首元素，arr 等价于 &arr[0]
printf("%d\n", *(p + 2)); // 输出数组的第三个元素：3
```

**遍历数组示例：**
```c
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;
for (int i = 0; i < 5; i++) {
    printf("arr[%d] = %d\n", i, *(p + i)); // 使用指针访问数组元素
}
```

---

### 三、指针与函数

可以通过指针来传递参数，实现函数对实参的修改（引用传递）。

#### 1. 指针实现交换函数

```c
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // 传递变量的地址给函数
    printf("After swap: x = %d, y = %d\n", x, y);
    // 输出：x = 20, y = 10
    return 0;
}
```

#### 2. 指针实现求数组最大值

```c
int max(int *arr, int size) {
    int max_value = *arr;  // 假设第一个元素为最大值
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max_value) {
            max_value = *(arr + i);  // 更新最大值
        }
    }
    return max_value;
}
```

---

### 四、指针与结构体

可以通过指针来访问结构体成员，使用 `->` 运算符。

```c
struct Student {
    int id;
    char name[20];
    float score;
};

int main() {
    struct Student s1 = {1, "Alice", 85.5};
    struct Student *p = &s1;  // 指针指向结构体变量s1
    printf("ID: %d, Name: %s, Score: %.1f\n", p->id, p->name, p->score);
    return 0;
}
```

> **注意**：通过指针访问结构体成员使用 `->` 运算符，而非 `.` 运算符。

## 代码示例

```c
#include <stdio.h>

// 函数声明
void swap(int *a, int *b);
int max(int *arr, int size);

// 结构体定义
struct Student {
    int id;
    char name[20];
    float score;
};

int main() {
    // 指针与数组
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }

    // 指针与函数
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);

    // 利用指针求数组最大值
    int max_val = max(arr, 5);
    printf("Maximum value in array: %d\n", max_val);

    // 指针与结构体
    struct Student s1 = {1, "Alice", 85.5};
    struct Student *p_student = &s1;
    printf("ID: %d, Name: %s, Score: %.1f\n", p_student->id, p_student->name, p_student->score);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int max(int *arr, int size) {
    int max_value = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max_value) {
            max_value = *(arr + i);
        }
    }
    return max_value;
}
```

## 运行结果示例

```
arr[0] = 1
arr[1] = 2
arr[2] = 3
arr[3] = 4
arr[4] = 5
Before swap: x = 10, y = 20
After swap: x = 20, y = 10
Maximum value in array: 5
ID: 1, Name: Alice, Score: 85.5
```