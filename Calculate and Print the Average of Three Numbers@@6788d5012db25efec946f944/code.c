#include <stdio.h>


int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Average: %.2f", (a+b+c)/3.0);
    return 0;
}