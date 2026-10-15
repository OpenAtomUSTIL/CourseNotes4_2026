#include <stdio.h>

// ptr in arr 
// array 数组的名字就是指向数组本身的首地址的指针 或者叫头指针也可以
/**
 *  
 *  Q 1. 数组指针 和指针数组 
 *
 * */

void HaveMeat();
void HaveVegetable();

void TheDinner(void (*Dishes)(void),void (*Vagen)(void));
int main(){
    //printf("hello world");
    TheDinner(&HaveMeat,&HaveVegetable);
}


/**
 *  Q 2 函数指针和 指针函数  
 *
 * */

void TheDinner(void (*Dishes)(void),void (*Vagen)(void)){
    Dishes();
    Vagen();
}

void HaveMeat(){
    printf("今晚吃牛排。\n");
}

void HaveVegetable(){
    printf("佐餐是两根煎竹笋\n");
}


char* getName(){
    
}