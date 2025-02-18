#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(upper(ch)){
        printf("Uppercase");
    }else if (lower(ch)){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
        }

    
    return 0; 
}
