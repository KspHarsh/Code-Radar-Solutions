#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int sum=1;
        for(int j=i;j<=n;j++){
            printf("%c ",sum+64);
            sum++;
        }
        printf("\n");
    }
}

