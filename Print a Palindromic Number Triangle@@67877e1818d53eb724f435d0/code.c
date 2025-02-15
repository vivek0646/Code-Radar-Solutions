#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-1; k++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        for(int v=1; v<=i-1; v++){
            printf("%d", v);
        }
        printf("\n");
    }
    return 0;
}