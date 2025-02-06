#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b && b==c && c==a){
        printf("Equilateral");
    }
    else if((a==b && b==c && c!=a) || (b==c && b==a && c!=a) || (c==a && c==b && b!=a)){
        printf("Isosceles");
    }
    else if(a!=b && b!=a && c!=a){
        printf("Scalene");
    }
    return 0;
}