#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("请输入数组的大小: ");
    scanf("/%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("内存分配失败\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("请输入第 /%d 个元素: ", i + 1);
        scanf("/%d", &arr[i]);
    }

    printf("数组元素为: ");
    for (int i = 0; i < n; i++) {
        printf("/%d ", arr[i]);
    }

    printf("\n");
    free(arr); 

    return 0;
}