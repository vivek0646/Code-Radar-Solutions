#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a>=18){
        prinf("Eligible");
    }
    else if(a<18){
        prinf("Not Eligible");
    }
    return 0;
}
