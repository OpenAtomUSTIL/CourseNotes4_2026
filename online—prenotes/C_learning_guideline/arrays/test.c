// #include <stdio.h>

// int main() {
//     int i=0;
//     int ans=0;
//     while(1){
//         // 1 2 3 4 5 6 7 8 9 + 10
//         i++;
//         if(i<5){
//             continue;
//         }
//         ans+=i; // 5 + 6 + 7 + 8 + 9 + 10
//         if(i==10){
//             break;
//         }
//     }
//     printf("%d",ans);
// }
// // -1  -2
// int func(int a,int b){
//     if((a>0&&b>0)||a<=b){
//         return (a>2)?a:b;
//     }else if(a<0&&b<0){
//         return (a>b)?a:b;
//     }else{
//         return 1;
//     }
// }

int  fab(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fab(n-1) + fab(n-2);
    }
}

// 5 = fab(4) + fab(3);// 2
// fab(3) = fab(2) + fab(1);

// fab(4) = fab(3) + fab(2);// 2 + 1 = 3
// 5

#include <stdio.h>
int main(){
    printf("%d",fab(5));
}