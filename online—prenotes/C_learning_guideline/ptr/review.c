#include  <stdio.h>
void bubbleSort(int arr[],int len);
int binarySearch(int arr[],int len,int num);
// int main(){
//     int arr[] = {2,6,7,1,2};
//     // 0 - 4 
//     int n = sizeof(arr)/sizeof(int);
//     printf("the length of n is %d\n",n);
//     for(int i  = 0; i < n; i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     // sizeof()
//     // long 
//     // double   a = '1';
//     // printf("%lu",sizeof(a));

// }
// // array size 

// 数组遍历 

// 数组越界 

// int main(){
//     int arr[5] = {3,5,6,1,2};
//     printf("arr[5] is %d",arr[6]);
// }

// 冒泡排序函数 
int main(){
    int arr[5] = {59,78,21,86,521};
    // bubbleSort(arr,5);
    // for(int i  = 0; i < 5; i++){
    //     printf("%d ",arr[i]);
    // }
    printf("%d ",binarySearch(arr,5,86));
}

void bubbleSort(int arr[],int len){
    for(int end  = len-1; end > 0; end--){
        for(int i = 0; i < end; i++){
            if(arr[i] > arr[i+1]){
                int temp  = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

// 选择

void selectSort(int arr[],int len){
    for(int i = 0; i < len-1; i++){
        int min = i;
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


// binary search 二分查找 数组或者被比较的对象天然有序
int binarySearch(int arr[],int len,int num){
    int l = 0, r = len-1;
    int mid;
    while(l <= r){
        mid = (l + r)/2;
        if(arr[mid] < num){
            l = mid + 1;
            continue;
        }
        else if(arr[mid] > num){
            r = mid - 1;
            continue;
        }
        else{
            return mid;
        }
    }
    return -1;
}