#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if(c =='a'|| c=='e'||c== 'i'||c== 'o'||c== 'u'|| c=='O'){
        printf("Vowel");
    }
    else if((c>='a') && (c<='z')){
        printf("Consonant");
    }
    else if(c>='0' && c<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}