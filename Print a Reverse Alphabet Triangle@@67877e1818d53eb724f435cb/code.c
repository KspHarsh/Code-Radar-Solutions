#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n-1;i<=1;i++){
        for(int j=i;j<=i;j++){
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}