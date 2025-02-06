#include <stdio.h>


int main() {
    int a;
   scanf("%d",&a);
   if (a%a==0 && a%1==0 && a%3!=0 && a%4!=0 ){
    printf("Prime");
   }else{
    printf("Not Prime");
   }
   return 0 ;

}