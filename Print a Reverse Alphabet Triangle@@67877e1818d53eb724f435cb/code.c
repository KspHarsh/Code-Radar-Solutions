#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=n-1;i--){
        for(int j=i;j<=n;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
}