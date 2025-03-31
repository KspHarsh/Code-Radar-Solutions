// #include<stdio.h>
// int mian(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         int sum=1;
//         for(int j=i;j<=n;j++){
//             printf("%d",sum);
//             sum++;
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int sum=1;
        for(int j=1;j<=i;j++){
            

            printf("%c ",sum+64);
            sum++;
        }
        printf("\n");
    }
}