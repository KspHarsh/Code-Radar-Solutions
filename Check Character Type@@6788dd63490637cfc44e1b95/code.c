#include <stdio.h>
#include <ctype.h>

int main() {
    char num;
    scanf(" %c",&num);
    
    if (num=='a'||num=='e'||num=='i'||num=='o'||num=='u'||num=='A'||num=='E'||num=='I'||num=='O'||num=='U'){
        printf("Vowel");

    }else if (isdigit(num)){
        printf("Digit");
    }else if (isalpha(num)){
        printf("Consonant");
    }else {
        printf("Special Character");
    }
    
            return 0;
}