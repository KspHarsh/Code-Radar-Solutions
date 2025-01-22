#include <stdio.h>


int main() {
    char grade;
    scanf("%c",&grade);
    if (grade='A'){
        printf("Excellent");
    }else if (grade='B'){
        printf("Average");
    }else if (grade='C'){
        printf("Below Average");
    }else if (grade='D'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
   
    return 0;
}