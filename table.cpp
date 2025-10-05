#include <stdio.h>

int main() {
    int num, i;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        printf("Multiplication Table of %d:\n", num);
        for(i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("\nDo you want to print another table? (Y/N): ");
        scanf(" %c", &choice);  

    } while(choice == 'Y' || choice == 'y');

    return 0;
}
