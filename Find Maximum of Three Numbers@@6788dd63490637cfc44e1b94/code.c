#include <stdio.h>

int main() 
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b>c){
        printf(a)
    }else if (b>a>c) {
        printf(b);
    }else(c>a>b){
        printf(c)
    }
    return 0;
}