#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    if (num & (1 << n))
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
