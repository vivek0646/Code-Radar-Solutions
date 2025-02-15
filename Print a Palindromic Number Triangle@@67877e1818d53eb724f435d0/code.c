#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        int a= i-1;
        for(int v=1; v<=i-1; v++){
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}