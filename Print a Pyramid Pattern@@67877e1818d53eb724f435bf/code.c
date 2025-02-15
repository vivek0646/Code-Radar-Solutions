// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++){
//         for(int k=1; k<=n-i; k++){
//             printf(" ");
//         }
//     }   for(int j=1; j<=2*i-1; j++){
//             printf("*");
//     }
//     printf("\n");
//     return 0;
// }


#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        for(int k=1; k<=n-i; k++){   //for spaces in the left.
            printf(" ");
        }

        for(int j=1; j<=2*i-1; j++){   //for priyamid start printing.
            printf("*");
        }
        printf("\n");
    }
    return 0;
}