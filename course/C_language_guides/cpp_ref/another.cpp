#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
// gcc g++  llvm  clang clang++
// 类 
//男主 - 远方亲戚病逝  - 获得遗产

// 类 通过继承获得另一个类的属性或者方法 的访问权。
//  
//
class B  {
public :
    int size;
    int getSize(){
        return size;
    }
};

class C public : B {

};
// 面向对象的 大概语法跟C 一样  C + 流式操作
//  类 + 面向对象特性 
//  OK 
//
//  面向对象三大特性 
//  - 封装 
//   理解  封装成一个库  或者说 封装成一个函数 
// - 继承 
// 通过继承或者访问权限  
//- 多态 
//   一种行为 在不同的类当中的不同实现形式 
//   不同的鸟会飞  鸟飞的方式不一样 不同的动物发出的声音不一样 叫声不一样。
//
//
//
/// private 
/// struct map{
/// 
/// }
int main(){
    // cout  cin 
//     m.a = 10;
// }
    std::map<int,string> m;
};
