#include <stdio.h>
void bubbleSort(int arr[],int len);
void selectionSort(int arr[],int len);
int main(){
    // 123
    // int arr[3] = {1,2,3};
    // // 什么叫数组 
    // // 创建数组 
    
    // // 数组遍历 
    // // printf("%d",arr[0]);
    // // 0 1 2
    // for(int i = 0; i < 3; i++){
    //     printf("%d ",arr[i]);
    // }
    // 0 1 2 3 4

    // 我现在要一个数组 5个数 我现在要输入五个数 然后遍历这个数组
    // int arr[5] = {0};
    // for(int i = 0; i < 5; i++){
    //     scanf("%d",&arr[i]);
    // }
    // getchar();
    // for(int i = 0; i < 5; i++){
    //     printf("%d ",arr[i]);
    // }
    // 排序 

    // bubbleSort
    int arr[5] = {7,4,1,8,3};
    // bubbleSort(arr,5);
    selectionSort(arr,5);
    for(int i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }


}

void bubbleSort(int arr[],int len){
    for(int end = len - 1; end > 0; end--){
        //  3   第一次索引arr[4]   74183
        //  4 7 183
        // 4 1 7 83
        // 4 1 7 83
        // 4 1 7 3 8

        // 第二次 到了arr[3] = 3
        // 4 1 7 3 8
        // 1 4 73  8 
        // 1 4 7 3 8
        // 1 4 3 7 8

        // 第三次 到了arr[2] = 3;
        // 1 4 3 7 8
        // 1 3 4 7 8

        // 第四次 到了arr[1] = 3;
        // 13478
        for(int i = 0; i< end; i++){
            if(arr[i]> arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

// selection sort 
void selectionSort(int arr[],int len){
    // 74183
    // 1 4783
    for(int min, i = 0; i < len; i++){
        min = i;
        // 第一次循环  i = 0; min = 0 
        // j = 1 7 4 j = 2 j = 3 j = 4 
        // min = 1;  min = 2
        // 14583

        /*
            2nd i = 1 min = 1 
            j = 2 min = 1 
            j = 3 min = 1
            j = 4 min = 4
            1 3 584
        */

        /*
            3rd i = 2  min = 2
            1 3 584   4
            min = 2
            min = 4
            134 85
            13478
        */
        for(int j = i + 1; j < len; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}