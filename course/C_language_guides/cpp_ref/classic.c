#include <stdio.h>
// 编程范式  
// 1. C  高级语言  面向过程的高级语言 
// 高级语言  低级语言  汇编 
//  知道寄存器  知道怎么往寄存器写入值 
//  mov  ax    10 
//  mov  ax  bx  
//  ret 0
// 面向过程  先买菜  - 洗菜 - 找一个锅  烧水  做菜  拿筷子吃  - 需要把过程描述出来  
// 自己实现数据结构 
//  
// 
//  面向对象 - 封装继承和多态 
//
// 人 - 对象 
//
// 会把数据结构  结构是自定义的 结构和响应的函数  和主体程序 放在一起 。
typedef struct Map {
    int key;
    int value;
}Map;// 自己定义的一个类型 


int getKey(Map *m){
    return m->key;
}// 功能函数  - 类型的
// . 

int main(){
    Map m;
    m.key = 10;
    m.value = 20;
    getKey(&m);
    printf("hello world");
}

// 编程范式 和 语言类型的 内容 
//  Java 

/**
* 目前AI 要求 技术过硬 同时 兼顾新技术 
*  agent  mcp   skill vibe coding  如何更好的控制 关于 AI 你需要了解的二三事。 
*  AI  Deepdeek harness 
*  node.js  
*  安装包 - 下载 10块 
* /


// 主要技术过硬 
// - 你能不能看懂技术文档 遇到问题怎么解决  搜索 
//  - 用语言解决问题 熟练掌握至少一个  
//  - 写代码 瞎折腾。 
//  -  找代码  git 版本控制工具 
//  github 远程代码仓库 
//  gitee 
//  gitlab // 改成纯付费
//  gitcode 
//  去哪找项目 
//  去油管  B站
//  看文档。 稀土掘金  CSDN StackOverflow  博客园 文字版 
//    项目 -  方向 
//    Cpp  硬件  上位机  单片机   音视频 
//    Java  web应用 后端开发  
//    全栈  = 全干  
//    python 算法岗 - 双9硕  
//
//  前后端 AI全栈  
//  AI infra 国企  CUDA
//  运维  运行维护  - 网站 - 网页本质实际上是文件 文件放在远程的服务器里 服务器的IP   域名 www.baidu.com 
//  测试 开发写问题 测试找问题 
//  开发  写业务的 
//
//  产品经理 
//  FDE 去跟客户做产品演示和沟通需求 
//
//   AI  模型训练 
//       算法 
//       提示词工程师。`prompt`
//
