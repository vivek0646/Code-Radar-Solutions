#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n); // Read number and bit position

    num = num & ~(1 << n); // Clear the nth bit

    printf("%d\n", num); // Print updated number
    return 0;
}
