#include <stdio.h>

int main() {
    int n,sum=1;
    scanf("%d", &n);

   for (int i=1;i<=n;i++){
    for ( int j=1;j<=i;j++){

         printf("%c ",j+64);
         sum++;
    }
            printf("\n");

   }

   
    return 0;
}