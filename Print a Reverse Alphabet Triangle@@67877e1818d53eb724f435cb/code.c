#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
     int a=1;
     for(int j=1; j<=n+1-i; j++){
        char ch= (char)a+64;
        printf("%c ", ch);
        a++;
     }   
    printf("\n");
    }


    return 0;
}
