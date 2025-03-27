#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

   for (int i=0;i<=n;i++){
    int sum =1;
    for ( int j=i;j<=n;j++){

         printf("%d ",sum);
         sum+=i;
    }
            printf("\n");

   }

   
    return 0;
}