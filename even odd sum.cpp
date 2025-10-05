#include <stdio.h>

int main() {
    int i, even_sum = 0, odd_sum = 0;

    for(i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            even_sum += i;
        } else {
            odd_sum += i;
        }
    }

    printf("Sum of even numbers from 1 to 20: %d\n", even_sum);
    printf("Sum of odd numbers from 1 to 20: %d\n", odd_sum);

    return 0;
}
