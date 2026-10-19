# 第六节课

**日期**：2026-10-19  
**时间**：18:30-21:30  
**授课**：听小昕碎碎念,USTIL实验室成员178
**记录**：凡尘

## 课程内容

### 一、动态分配

#### 1. 动态分配内存

在程序运行时，根据需要动态分配内存空间，使用完毕后释放内存，避免内存浪费。

**malloc 函数：**
```c
void *malloc(size_t size);
```
- **功能**：分配指定大小的内存空间，返回指向该内存空间的指针
- **参数**：`size` — 要分配的内存空间的大小（以字节为单位）
- **返回值**：成功返回指向分配的内存空间的指针，失败返回 `NULL`

**free 函数：**
```c
void free(void *ptr);
```
- **功能**：释放之前动态分配的内存空间
- **参数**：`ptr` — 指向要释放的内存空间的指针

#### 2. 动态分配数组

可以使用 `malloc` 函数动态分配数组的内存空间，使用完毕后释放。

**示例：**
```c
int n;
printf("请输入数组的大小: ");
scanf("%d", &n);

int *arr = (int *)malloc(n * sizeof(int)); // 动态分配内存
if (arr == NULL) {
    printf("内存分配失败\n");
    return 1;
}

// 使用数组...
free(arr); // 释放动态分配的内存
```

#### 3. 注意事项

1. 动态分配的内存**必须手动释放**，否则会导致内存泄漏
2. 使用 `malloc` 后应检查返回值是否为 `NULL`
3. 释放内存后建议将指针置为 `NULL`，避免悬空指针
4. 程序结束后系统会自动释放内存，但长时间运行的程序不释放会导致内存不足甚至崩溃

---

### 二、共同体

#### 1. 共同体的定义

共同体（`union`）是一种特殊的数据类型，它允许在同一内存位置存储不同的数据类型，但同一时间只能使用其中的一种数据类型。

**定义格式：**
```c
union 共同体名 {
    数据类型1 成员名1;
    数据类型2 成员名2;
    ...
};
```

**示例：**
```c
union Data {
    int i;
    float f;
    char c;
};
```

#### 2. 共同体的使用

- **访问共同体成员**：`共同体变量.成员名`
- **修改共同体成员**：`共同体变量.成员名 = 新值;`
- **获取共同体成员的地址**：`&共同体变量.成员名`

**示例：**
```c
union Data data;
data.i = 10;
printf("data.i = %d\n", data.i);
data.f = 3.14;
printf("data.f = %f\n", data.f);
data.c = 'A';
printf("data.c = %c\n", data.c);
```

#### 3. 共同体的注意事项

1. 共同体的大小取决于**最大成员**的大小
2. 共同体的所有成员**共享同一块内存空间**
3. 修改一个成员会影响其他成员的值

---

### 三、枚举

#### 1. 枚举的定义

枚举（`enum`）是一种用户自定义的数据类型，它由一组命名的整型常量组成。

**定义格式：**
```c
enum 枚举名 {
    常量名1,
    常量名2,
    ...
};
```

**示例：**
```c
enum Day {
    Monday,     // 0
    Tuesday,    // 1
    Wednesday,  // 2
    Thursday,   // 3
    Friday,     // 4
    Saturday,   // 5
    Sunday      // 6
};
```

#### 2. 枚举的使用

```c
enum Day today = Wednesday;
printf("今天是星期: %d\n", today); // 输出 2
```

#### 3. 枚举的注意事项

1. 枚举成员的默认值从 **0** 开始，依次递增
2. 可以为枚举成员指定具体的整数值：
   ```c
   enum Color { RED = 1, GREEN = 3, BLUE = 5 };
   ```

---

### 四、类别别名

#### 1. typedef 关键字

`typedef` 关键字用于为已有的数据类型定义一个新的别名，提高代码的可读性和维护性。

**定义格式：**
```c
typedef 原数据类型 新别名;
```

#### 2. typedef 的使用

**定义结构体别名：**
```c
typedef struct {
    int id;
    char name[20];
    float score;
} Student;

// 使用时无需写 struct 关键字
Student s1 = {1, "Alice", 90.5};
```

**定义指针别名：**
```c
typedef int *IntPtr;
IntPtr p;  // 等价于 int *p;
```

**定义函数指针别名：**
```c
typedef int (*FuncPtr)(int, int);
```

#### 3. typedef 的注意事项

1. `typedef` 定义的别名不能与已有的类型名冲突
2. `typedef` 定义的别名可以用于声明变量、函数参数和返回值等

---

### 五、I/O 操作

#### 1. 文件指针

**定义：**
```c
FILE *fp;
```

**使用：**
```c
fp = fopen("filename", "mode");
// 文件操作...
fclose(fp);
```

#### 2. 文件操作函数

**打开文件 — fopen：**
```c
FILE *fopen(const char *filename, const char *mode);
```
- `filename`：文件名
- `mode`：打开模式

**关闭文件 — fclose：**
```c
int fclose(FILE *stream);
```

**写入文件 — fprintf：**
```c
int fprintf(FILE *stream, const char *format, ...);
```

**读取文件 — fscanf：**
```c
int fscanf(FILE *stream, const char *format, ...);
```

#### 3. 文件打开模式

| 模式 | 说明 |
|------|------|
| `"r"` | 以只读方式打开文件，文件必须存在 |
| `"w"` | 以只写方式打开文件，文件不存在则创建，存在则**清空内容** |
| `"a"` | 以追加方式打开文件，文件不存在则创建，存在则在末尾追加 |
| `"rb"` / `"wb"` / `"ab"` | 二进制模式打开 |

**示例：**
```c
fp = fopen("data.txt", "w");
if (fp == NULL) {
    printf("文件打开失败\n");
    return 1;
}
fprintf(fp, "Hello, World!\n");
fclose(fp);
fp = NULL; // 避免悬空指针
```

#### 4. 标准输入输出

- `printf` / `scanf`：格式化输入输出
- 格式控制符：`%d`、`%f`、`%c`、`%s` 等
- 标准输入输出函数使用**缓冲区**提高效率，缓冲区满时才会进行实际的读写操作

---

## 完整代码

```c
#include <stdio.h>
#include <stdlib.h>

// 共同体定义
union Data {
    int i;
    float f;
    char c;
};

// 枚举定义
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

// typedef 结构体别名
typedef struct {
    int id;
    char name[20];
    float score;
} Student;

// 文件指针
FILE *fp;

int main() {
    // 1. 动态分配数组
    int n;
    printf("请输入数组的大小: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("内存分配失败\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("请输入第 %d 个元素: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("数组元素为: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);

    // 2. 共同体的使用
    union Data data;
    printf("共同体的大小: %zu 字节\n", sizeof(data));
    data.i = 10;
    printf("data.i = %d\n", data.i);
    data.f = 3.14;
    printf("data.f = %f\n", data.f);
    data.c = 'A';
    printf("data.c = %c\n", data.c);

    // 3. 枚举的使用
    enum Day today = Wednesday;
    printf("今天是星期: %d\n", today); // 输出 2

    // 4. typedef的使用
    Student s1 = {1, "Alice", 90.5};
    printf("学生信息: ID = %d, Name = %s, Score = %.2f\n", s1.id, s1.name, s1.score);

    // 5. I/O操作
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("文件打开失败\n");
        return 1;
    }
    fprintf(fp, "Hello, World!\n");
    fclose(fp);
    fp = NULL;

    return 0;
}
```

## 运行结果示例

```
请输入数组的大小: 3
请输入第 1 个元素: 10
请输入第 2 个元素: 20
请输入第 3 个元素: 30
数组元素为: 10 20 30
共同体的大小: 4 字节
data.i = 10
data.f = 3.140000
data.c = A
今天是星期: 2
学生信息: ID = 1, Name = Alice, Score = 90.50
```