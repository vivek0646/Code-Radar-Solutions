#include <stdio.h>
int main(){
    int n, j;
    scanf("%d %d", &n, &j);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            printf("%d", i);
        }
        printf("\n");
    }


    return 0;
}