#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("Result: %lld\n", result);

    return 0;
}
