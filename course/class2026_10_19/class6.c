/*
日期: 2026-10-19
时间：18:30-21:30
第五节课
授课：听小昕碎碎念,USTIL实验室成员178
记录：凡尘
*/

/*
    一、动态分配
        1. 动态分配内存
            在程序运行时，根据需要动态分配内存空间，使用完毕后释放内存，避免内存浪费
            1）malloc函数
                void *malloc(size_t size);
                功能：分配指定大小的内存空间，返回指向该内存空间的指针
                参数：size - 要分配的内存空间的大小（以字节为单位）
                返回值：成功返回指向分配的内存空间的指针，失败返回NULL
            2）free函数
                void free(void *ptr);
                功能：释放之前动态分配的内存空间
                参数：ptr - 指向要释放的内存空间的指针
        2. 动态分配数组
            可以使用malloc函数动态分配数组的内存空间，使用完毕后释放
    二、共同体
        1. 共同体的定义
            共同体是一种特殊的数据类型，它允许在同一内存位置存储不同的数据类型，但同一时间只能使用其中的一种数据类型
            定义格式：
                union 共同体名{
                    数据类型1 成员名1;
                    数据类型2 成员名2;
                    ...
                };
        2. 共同体的使用
            1）访问共同体成员
                共同体变量.成员名
            2）修改共同体成员
                共同体变量.成员名 = 新值;
            3）获取共同体成员的地址
                &共同体变量.成员名
        3. 共同体的注意事项
            1）共同体的大小取决于最大成员的大小
            2）共同体的所有成员共享同一块内存空间
    三、枚举
        1. 枚举的定义
            枚举是一种用户自定义的数据类型，它由一组命名的整型常量组成
            定义格式：
                enum 枚举名{
                    常量名1,
                    常量名2,
                    ...
                };
        2. 枚举的使用
            1）访问枚举成员
                枚举变量 = 常量名;
            2）修改枚举成员
                枚举变量 = 新的常量名;
            3）获取枚举成员的值
                枚举变量;
        3. 枚举的注意事项
            1）枚举成员的默认值从0开始，依次递增
            2）可以为枚举成员指定具体的整数值
    四、类别别名
        1. typedef关键字
            typedef关键字用于为已有的数据类型定义一个新的别名，便于代码的可读性和维护性
            定义格式：
                typedef 原数据类型 新别名;
        2. typedef的使用
            1）定义结构体别名
                typedef struct 结构体名{
                    成员定义;
                } 新别名;
            2）定义指针别名
                typedef 数据类型 *新别名;
            3）定义函数指针别名
                typedef 返回类型 (*新别名)(参数类型);
        3. typedef的注意事项
            1）typedef定义的别名不能与已有的类型名冲突
            2）typedef定义的别名可以用于声明变量、函数参数和返回值等
    五、I/O操作
        1. 文件指针
            1）文件指针的定义
                FILE *fp;
            2）文件指针的使用
                fp = fopen("filename", "mode");
                fclose(fp);
        2. 文件操作
            1）文件的打开
                fopen函数用于打开一个文件，返回一个文件指针
                FILE *fopen(const char *filename, const char *mode);
                参数：
                    filename - 文件名
                    mode - 打开模式（"r"、"w"、"a"、"rb"、"wb"、"ab"等）
            2）文件的关闭
                fclose函数用于关闭一个已打开的文件
                int fclose(FILE *stream);
                参数：
                    stream - 文件指针
            3）文件的读写
                fprintf函数用于向文件写入格式化数据
                int fprintf(FILE *stream, const char *format, ...);
                fscanf函数用于从文件读取格式化数据
                int fscanf(FILE *stream, const char *format, ...);
            4）文件打开模式
                "r" - 以只读方式打开文件，文件必须存在
                "w" - 以只写方式打开文件，文件不存在则创建，存在则清空内容
                "a" - 以追加方式打开文件，文件不存在则创建，存在则在文件末尾追加内容
        2. 标准输入输出
            1）标准输入输出函数
                int printf(const char *format, ...);
                int scanf(const char *format, ...);
            2）格式化输入输出
                格式控制符：%d、%f、%c、%s等
            3）缓冲区
                标准输入输出函数使用缓冲区提高效率，缓冲区满时才会进行实际的读写操作

    注：
        1.写了一个很大的文件而没free，会导致内存泄漏
        2.写了一个很大的文件而没free，程序结束后会自动释放内存，但如果程序长时间运行，可能会导致内存不足，甚至崩溃，甚至导致系统崩溃

*/

#include <stdio.h>
#include <stdlib.h>

// eg1 动态分配数组

// eg2 共同体
union Data {
    int i;
    float f;
    char c;
};

// eg3 枚举
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

// eg4 typedef
typedef struct {
    int id;
    char name[20];
    float score;
} Student;

// eg5 I/O操作
FILE *fp; // 文件指针


int main() {

    // eg1 动态分配数组
    int n;
    printf("请输入数组的大小: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int)); // 动态分配内存
    if (arr == NULL) {
        printf("内存分配失败\n");
        return 1;
    }

    // 输入数组元素
    for (int i = 0; i < n; i++) {
        printf("请输入第 %d 个元素: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 输出数组元素
    printf("数组元素为: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    free(arr); // 释放动态分配的内存

    // eg2 共同体的使用
    union Data data;
    printf("共同体的大小: %zu 字节\n", sizeof(data));
    data.i = 10;
    printf("data.i = %d\n", data.i);
    data.f = 3.14;
    printf("data.f = %f\n", data.f);
    data.c = 'A';
    printf("data.c = %c\n", data.c);

    // eg3 枚举的使用
    enum Day today = Wednesday;
    printf("今天是星期: %d\n", today); // 输出 2

    // eg4 typedef的使用
    Student s1 = {1, "Alice", 90.5};
    printf("学生信息: ID = %d, Name = %s, Score = %.2f\n", s1.id, s1.name, s1.score);

    // eg5 I/O操作
    fp = fopen("data.txt", "w"); // 清空文件内容并以写入模式打开文件
    if (fp == NULL) {
        printf("文件打开失败\n");
        return 1;
    } // 判断文件是否打开成功
    fprintf(fp, "Hello, World!\n"); // 写入文件
    fclose(fp); // 关闭文件
    fp = NULL; // 关闭文件后将文件指针置为NULL，避免悬空指针

    // eg5t1 用文件指针写一个文件，写入动态分配数组
    fp = fopen("array_data.cpp", "w");
    if (fp == NULL) {
        printf("文件打开失败\n");
        return 1;
    } // 判断文件是否打开成功
    fprintf(fp, "#include <stdio.h>\n");
    fprintf(fp, "#include <stdlib.h>\n");
    fprintf(fp, "\n");
    fprintf(fp, "int main() {\n");
    fprintf(fp, "    int n;\n");
    fprintf(fp, "    printf(\"请输入数组的大小: \");\n");
    fprintf(fp, "    scanf(\"/%%d\", &n);\n");
    fprintf(fp, "\n");
    fprintf(fp, "    int *arr = (int *)malloc(n * sizeof(int));\n");
    fprintf(fp, "    if (arr == NULL) {\n");
    fprintf(fp, "        printf(\"内存分配失败\\n\");\n");
    fprintf(fp, "        return 1;\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "\n");
    fprintf(fp, "    for (int i = 0; i < n; i++) {\n");
    fprintf(fp, "        printf(\"请输入第 /%%d 个元素: \", i + 1);\n");
    fprintf(fp, "        scanf(\"/%%d\", &arr[i]);\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "\n");
    fprintf(fp, "    printf(\"数组元素为: \");\n");
    fprintf(fp, "    for (int i = 0; i < n; i++) {\n");
    fprintf(fp, "        printf(\"/%%d \", arr[i]);\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "\n");
    fprintf(fp, "    printf(\"\\n\");\n");
    fprintf(fp, "    free(arr); \n");
    fprintf(fp, "\n");
    fprintf(fp, "    return 0;\n");
    fprintf(fp, "}");
    printf("文件写入完成\n");
    fclose(fp); // 关闭文件
    fp = NULL; // 将文件指针置为NULL

    return 0;
}