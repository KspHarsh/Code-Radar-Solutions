#include <stdio.h>



int main() {
    int a,b,d;
    char c;
    scanf("%d %d %d",&a,&b,&c);
    if (c=='*'){
        d=a*b;
        printf("%d",d);
    }


    return 0;
}