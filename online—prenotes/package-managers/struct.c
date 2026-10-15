#include <stdio.h>
 
typedef struct Student {
    char* name;
    int age;
    char* gender;
    void (*print)(Student*);

}Student;   

void printStuInfo(Student *stu);

void printStuInfo(Student *stu){
    printf("学生姓名 %s\n学生年龄 :%d\n学生性别: %s\n",stu->name,stu->age,stu->gender);
    printf("---------------\n");
}

int main(){
    Student zhangsan;
    zhangsan.age = 10;
    zhangsan.name = "zhangsan";
    zhangsan.gender = "男";
    zhangsan.print = printStuInfo;
    printStuInfo(&zhangsan);
}


