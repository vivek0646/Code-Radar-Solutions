#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num); // Read input

    int leading_zeros = __builtin_clz(num); // Count leading zeros
    printf("%d\n", leading_zeros); // Print the count

    return 0;
}
