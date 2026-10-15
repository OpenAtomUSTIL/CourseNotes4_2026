#include <stdio.h>

// 逆序每次向右移动一位
void InBinary(int num){
    for(int i = 31; i >= 0; i--){
        int bit = (num >> i) & 1;
        printf("%d",bit);
    }
    printf("\n");
}