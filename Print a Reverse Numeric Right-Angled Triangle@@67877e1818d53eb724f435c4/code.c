#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

   for (int i=1;i<=n;i++){
    int sum =1;
    for ( int j=i;j<=n;j++){

         printf("%d ",sum);
         sum++;
    }
            printf("\n");

   }

   
    return 0;
}